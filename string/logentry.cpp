//
//
// File:        logentry.cpp  
//       
// Version:     1.0
// Date:        
// Author:      
//
// Description: Class implementation for a log entry.
//
//
 
#include "string.hpp"
#include "logentry.hpp"
#include <iostream>
#include <vector>

//Date
Date::Date(String d) {
    std::vector<String> result = d.split('/');
    day = result[0];
    month = result[1];
    year = toInt(result[2]);
    
}


//
Time::Time(String h, String m, String s) {
    //:12:05:25
    hour = toInt(h);
    minute = toInt(m);
    second = toInt(s);
}


// REQUIRES:
// ENSURES:
LogEntry::LogEntry(String line) {
    //Use split to create LogEntry
    //std::vector<String> logEntryParts = line.split(' ');
    
    std::vector<String> logEntryParts = line.split(' ');
    
    //Checks if the entry is valid
    if(logEntryParts.size() == 10) {
        //Initialize to zero
        host = logEntryParts[0];
        
        String result = logEntryParts[3].substr(1, logEntryParts[3].length() - 1);
        std::vector<String> FixDate = result.split(':');

        //Date
        date = Date(FixDate[0]);

        //Time

        time = Time(FixDate[1], FixDate[2], FixDate[3]);

        //131.123.47.176 - - [18/Sep/2002:12:05:25 -0400] "GET /~darci/ HTTP/1.0" 200 5625
        //      0        1  2     3          4        5                6            7
        request = logEntryParts[5] + " " + logEntryParts[6] + " " + logEntryParts[7];
        status = logEntryParts[8];
        number_of_bytes = (logEntryParts[9] != "-") ? toInt(logEntryParts[9]) : 0;

    }

    else {
        //Handle Invalid Entries
        host = "";
        request = "";
        status = "";
        number_of_bytes = 0;
    }
}

// REQUIRES:
// ENSURES:
std::vector<LogEntry> parse(std::istream& in) {
    std::vector<LogEntry> result;
    char sBuffer[500];

    while(in.getline(sBuffer, 500)) {
        String temp(sBuffer);
        result.push_back(temp);
    }

    return result;
}

std::ostream& operator<<(std::ostream& out, const LogEntry& line) {
    out << "Host: " << line.getHost() << " Date: "
       << line.date.getDay()<< " " << line.date.getMonth() << "/" << line.date.getYear() << ":"
       << " Time: " << line.time.getHour() << ":" << line.time.getMin() << ":" << line.time.getSec() << " Request: "
        << line.getRequest()
       << " Status: " << line.getStatus() << " Bytes: "
       << line.getBytes();
    return out;
}

// REQUIRES:
// ENSURES:
void output_all(std::ostream& out, const std::vector<LogEntry>& lines) {
    for(const auto& line : lines) {
        out << line << std::endl;
    }
    
}

// REQUIRES:
// ENSURES:
void by_host(std::ostream& out, const std::vector<LogEntry>& line) {
    std::vector<std::pair<String, int>> hostCounts;
    for(std::vector<LogEntry>::const_iterator it_Entry = line.begin(); it_Entry != line.end(); ++it_Entry) {
        bool found = false;
        for(std::vector<std::pair<String, int>>::iterator count = hostCounts.begin(); count != hostCounts.end(); ++count) {
            if(count -> first==it_Entry -> getHost()) {
                count -> second++;
                found = true;
                break;
            }
        }
        if(!found) {
            hostCounts.push_back(std::make_pair(it_Entry -> getHost(), 1));
        }
    }
    for (std::vector<std::pair<String, int> >::const_iterator it_count = hostCounts.begin(); it_count != hostCounts.end(); ++it_count) {
        out << it_count->first << ": " << it_count->second << std::endl;
    }
}

// REQUIRES:
// ENSURES:
int byte_count(const std::vector<LogEntry>& line) {
    std::cout << "Total Number of Bytes: ";
    int totalBytes = 0;

    for (const auto& entry : line) {
        totalBytes += entry.getBytes();
    }
    return totalBytes;
}

int toInt(const String& str) {
    int result = 0, times = 1, temp = 0, charInt;
    int len = str.length() - 1;

    while(len >= 0) {
        charInt = (int)str[len] - (int)'0';
        temp = charInt * times;
        result = result + temp;
        times = times * 10;
        --len;
    }


    return result;
}
