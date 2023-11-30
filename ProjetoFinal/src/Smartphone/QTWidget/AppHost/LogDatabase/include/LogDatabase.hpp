

//For code reusability, I utilized the `Queue` class from the previous project to implement the `LogDatabase` class.


#pragma once
#include "../../logData/logData.hpp"
#include "linkedList.hpp"
#include <string>
#include <sstream>

std::string const filename = "logs.txt"; // File name to save the logs

class LogDatabase : private LinkedList<logData> {
private:
    std::string* search; // Pointer to the old search string. for efficiency uses memory allocation, but i do not know if it is the best way to do it.
    void LoadLogsFromFile(const std::string& filename); // Load logs from a file
    logData ParseLineToLogData(const std::string& line); // Parse a line from the file to a logData
    void AddLogToFile(const std::string& filename); // Save log to a file
    std::string GetLogString(logData data); // Get a string from a logData

public:
    LogDatabase(); // Constructor
    ~LogDatabase(); // Destructor
    void AddLog(logData data); // Add a log to the database

    // list events between two dates
    std::string* listEventsBetween(timeDate startDate, timeDate endDate);
};

