

//For code reusability, I utilized the `Queue` class from the previous project to implement the `LogDatabase` class.


#pragma once
#include "../../logData/logData.hpp"
#include "linkedList.hpp"
#include <string>
#include <sstream>

class LogDatabase : private LinkedList<logData> {
private:
    std::string* search; // Pointer to the old search string. for efficiency uses memory allocation, but i do not know if it is the best way to do it.

public:
    LogDatabase(); // Constructor
    ~LogDatabase(); // Destructor
    void AddLog(logData data); // Add a log to the database

    // list events between two dates
    std::string* listEventsBetween(timeDate startDate, timeDate endDate);
};

