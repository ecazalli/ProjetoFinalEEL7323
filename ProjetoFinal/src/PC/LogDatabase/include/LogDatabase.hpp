

//For code reusability, I utilized the `Queue` class from the previous project to implement the `LogDatabase` class.


#pragma once
#include "../../logData/logData.hpp"
#include "Queue.hpp"
#include <string>
#include <sstream>

class LogDatabase : public Queue<logData> {
private:
    std::string* search; // Pointer to the old search string. Para economizar memoria e

public:
    LogDatabase(); // Constructor
    LogDatabase(unsigned long max); // Constructor with maximum size
    ~LogDatabase(); // Destructor

    // list events between two dates
    std::string* listEventsBetween(timeDate startDate, timeDate endDate);
};

