
#include "include/LogDatabase.hpp"


LogDatabase::LogDatabase() : LinkedList<logData>() {
    // Constructor
    search = nullptr;
}

LogDatabase::~LogDatabase() {
    // Destructor
    delete search;
}

void LogDatabase::AddLog(logData data) {
    // Add a log to the database
    append(data);
}
std::string* LogDatabase::listEventsBetween(timeDate startDate, timeDate endDate) {
    delete search;
    std::stringstream ss;
    Node<logData>* current = this->getHead();

    while (current != nullptr) {
        logData currentData = current->getData();
        if (isDateInRange(currentData.log_time_date, startDate, endDate)) {
            ss << "Event: Controller ID " << (int)currentData.log_controller_ID
               << ", Time: " << currentData.log_time_date.hr << ":"
               << currentData.log_time_date.min << ":" << currentData.log_time_date.sec
               << ", Date: " << currentData.log_time_date.day << "/"
               << currentData.log_time_date.mo << "/" << currentData.log_time_date.yr
               << ", SensorH ID " << (int)currentData.log_senseH_ID
               << ", Batimentos " << (int)currentData.log_batimentos
               << ", SensorT ID " << (int)currentData.log_senseT_ID
               << ", Temp " << currentData.log_temp << "\n";
        }
        current = current->getNext();
    }
    search = new std::string(ss.str());
    return search;
}


bool isDateInRange(timeDate date, timeDate startDate, timeDate endDate) {
    // Convert dates to a comparable format (e.g., number of days since a fixed point in time)
    long dateVal = date.yr * 10000 + date.mo * 100 + date.day;
    long startDateVal = startDate.yr * 10000 + startDate.mo * 100 + startDate.day;
    long endDateVal = endDate.yr * 10000 + endDate.mo * 100 + endDate.day;

    // Check if the date is in range
    return (dateVal >= startDateVal && dateVal <= endDateVal);
}
