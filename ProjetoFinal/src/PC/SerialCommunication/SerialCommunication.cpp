
#include "include/SerialCommunication.hpp"
#include <stdexcept>
#include <codecvt>
#include <locale>



SerialCommunication::SerialCommunication(const std::string& portName) {
    openSerialPort(portName);
    configureSerialPort();
}

SerialCommunication::~SerialCommunication() {
    closeSerialPort();
}

void SerialCommunication::openSerialPort(const std::string& portName) {
    std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> converter;
    std::wstring widePortName = converter.from_bytes(portName);
    hSerial = CreateFile(widePortName.c_str(),
                         GENERIC_READ | GENERIC_WRITE,
                         0,
                         0,
                         OPEN_EXISTING,
                         FILE_ATTRIBUTE_NORMAL,
                         0);
    if (hSerial == INVALID_HANDLE_VALUE) {
        throw std::invalid_argument("Error opening serial port");
    }
}

void SerialCommunication::configureSerialPort() {
    dcbSerialParams = { 0 };
    dcbSerialParams.DCBlength = sizeof(dcbSerialParams);

    if (!GetCommState(hSerial, &dcbSerialParams)) {
        throw std::invalid_argument("Error getting serial port state");
    }
    //fixed parameters for serial port, 9600 baud rate, 8 bit data, no parity, and 1 stop bit.
    
    dcbSerialParams.BaudRate = CBR_9600;
    dcbSerialParams.ByteSize = 8;
    dcbSerialParams.StopBits = ONESTOPBIT;
    dcbSerialParams.Parity = NOPARITY;  
    

    if (!SetCommState(hSerial, &dcbSerialParams)) {
        throw std::invalid_argument("Error setting serial port state");
    }

    timeouts = { 0 };
    timeouts.ReadIntervalTimeout = 50;
    timeouts.ReadTotalTimeoutConstant = 50;
    timeouts.ReadTotalTimeoutMultiplier = 10;
    timeouts.WriteTotalTimeoutConstant = 50;
    timeouts.WriteTotalTimeoutMultiplier = 10;

    if (!SetCommTimeouts(hSerial, &timeouts)) {
        throw std::invalid_argument("Error setting serial port timeouts");
    }
}

void SerialCommunication::closeSerialPort() {
    CloseHandle(hSerial);
}

void SerialCommunication::sendCommand(commandType command, uint8_t controllerID, uint8_t registerNumber, uint8_t value) {
    // send a command to the serial port soliciting a read or write operation for a specific controller and register,
    //receiving only a logData in case of a read operation
    unsigned char commandByte = (unsigned char)command;
    unsigned char controllerIDByte = (unsigned char)controllerID;
    unsigned char sizeMsgByte = (unsigned char)4;
    unsigned char registerNumberByte = (unsigned char)registerNumber;
    unsigned char valueByte = (unsigned char)value;

    unsigned char packet[6] = {commandByte, controllerIDByte, sizeMsgByte, registerNumberByte, valueByte, 0 };
    DWORD bytes_written;
    if (!WriteFile(hSerial, packet, 6, &bytes_written, NULL)) {
        throw std::invalid_argument("Error writing to serial port");
    }
}

logData SerialCommunication::receiveLog(uint8_t controllerID) {
    //logs received type: uint8_t: command, id: uint8_t, logData: unsigned char// 
    unsigned char packet[2 + sizeof(logData)] = {0};
    logData log = {0};
    DWORD bytes_read;

    if (!ReadFile(hSerial, packet, sizeof(packet), &bytes_read, NULL)) {
        throw std::invalid_argument("Error reading from serial port");
    }

    if (bytes_read != sizeof(packet)) {
        throw std::invalid_argument("Invalid packet received");
    }

    if (isPacketValid(packet, commandType::READ, controllerID)) {
        memcpy(&log, packet + 2, sizeof(log));        
    } 

    sendCommand(commandType::ReceiveLog, controllerID, 0,0);  

    return log;       

    
}

std::vector<logData> SerialCommunication::receiveLogs(uint8_t controllerID) {
    // receive all logs from the serial port and return them as a vector of bytes
    std::vector<logData> logs;
    logData l;
    do {
        sendCommand(commandType::READ, controllerID, 0, 0);
        l = receiveLog(controllerID);
        if(l.log_controller_ID != 0){//a log is valid if the controller ID is not 0
            logs.push_back(l);
        }
        
    } while (l.log_controller_ID != 0) ;
    return logs;
}


bool SerialCommunication::isPacketValid(const unsigned char* packet, commandType command, uint8_t id) {
    bool valid = false;
    if(static_cast<uint8_t>(packet[0]) == static_cast<uint8_t>(command) && static_cast<uint8_t>(packet[1]) == id) {
        valid = true;
    }
    return valid;
}
       
/* void SerialCommunication::processReceivedPacket(const logData& packet){ 
   // process a received packet and add it to the database, if it is a logData. When a logData is received with a null

} */