
#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <vector>
#include "../../logData/logData.hpp"


enum class commandType: uint8_t{
    READ = 0,
    WRITE = 1,
    ReceiveLog = 2 //When data is successfully received by the master, it sends a data received command. 
                  //Only after this confirmation does the slave delete this log from its queue.
};

class SerialCommunication {
public:
    SerialCommunication(const std::string& portName);
    ~SerialCommunication();

   // send a command to the serial port soliciting a read or write operation for a specific controller and register,
   //receiving only a logData in case of a read operation
    void sendCommand(commandType command, uint8_t controllerID, uint8_t registerNumber, uint8_t value); 
    logData receiveLog(uint8_t controllerID); // receive a log from the serial port and return it as a vector of bytes (logData
    std::vector<logData> receiveLogs(uint8_t controllerID); // receive all logs from the serial port and return them as a vector of bytes
    //logs received type: commandType, id: uint8_t, sizepacket uint8_t, logData: value//
    //void processReceivedPacket(const logData& packet); // process a received packet and add it to the database, if it is a logData. When a logData is received whit a null


private:
    HANDLE hSerial;
    DCB dcbSerialParams;
    COMMTIMEOUTS timeouts;
    
    void openSerialPort(const std::string& portName);
    void configureSerialPort();
    void closeSerialPort();
    bool isPacketValid(const unsigned char* packet, commandType command,uint8_t controllerID); // check if a packet is valid
  };

