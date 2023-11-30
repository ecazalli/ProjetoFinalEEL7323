
#include "include/SerialCommunication.hpp"
#include <stdexcept>
#include <codecvt>
#include <locale>



SerialCommunication::SerialCommunication(const std::string& portName) {
    
}

SerialCommunication::~SerialCommunication() {
   
}

void SerialCommunication::openSerialPort(const std::string& portName) {
    
}

void SerialCommunication::configureSerialPort() {
    
}

void SerialCommunication::closeSerialPort() {
    
}

void SerialCommunication::sendCommand(commandType command, uint8_t controllerID, uint8_t registerNumber, uint8_t value) {
    // send a command to the serial port soliciting a read or write operation for a specific controller and register,
    //receiving only a logData in case of a read operation
    
}

logData SerialCommunication::receiveLog(uint8_t controllerID) {
    //logs received type: uint8_t: command, id: uint8_t, logData: unsigned char// 
     

    
}

std::vector<logData> SerialCommunication::receiveLogs(uint8_t controllerID) {
    // receive all logs from the serial port and return them as a vector of bytes
   
}


bool SerialCommunication::isPacketValid(const unsigned char* packet, commandType command, uint8_t id) {
    bool valid = false;
    if(static_cast<uint8_t>(packet[0]) == static_cast<uint8_t>(command) && static_cast<uint8_t>(packet[1]) == id) {
        valid = true;
    }
    return valid;
}
