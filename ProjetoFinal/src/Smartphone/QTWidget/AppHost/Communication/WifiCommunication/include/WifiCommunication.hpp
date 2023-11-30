#pragma once

#include <QObject>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QByteArray>
#include <cstdint>
#include <string>
#include <vector>
#include "../../logData/logData.hpp"

enum class commandType : uint8_t {
    READ = 0,
    WRITE = 1,
    ReceiveLog = 2
};

class WifiCommunication : public QObject {
    Q_OBJECT

public:
    explicit WifiManager(QObject *parent = nullptr);
    ~WifiManager();

    void sendWifiCommand(commandType command, uint8_t controllerID, uint8_t registerNumber, uint8_t value);
    logData receiveWifiLog(uint8_t controllerID);
    std::vector<logData> receiveWifiLogs(uint8_t controllerID);
    

private:
    QNetworkAccessManager *networkManager;
    QString wifiInterface; //   

    void openWifiPort(const std::string& portName);
    void sendWifiData(const QByteArray &data);
    QByteArray receiveWifiData();
    std::vector<QByteArray> receiveAllWifiData();
    void closeWifiPort();    
    bool isPacketValid(const unsigned char* packet, commandType command, uint8_t controllerID);
   
};