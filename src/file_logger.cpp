#include "file_logger.hpp"
#include <fstream>
#include <iostream>

FileLogger::FileLogger(std::string filename)
{
    logfile.open(filename);
    if (!logfile.is_open()) // Check if the file is successfully opened
    {    
     std::cout << "Unable to open file"; // Handle error if file cannot be opened
    }
}

void FileLogger::log(std::string msg)
{
    if (logfile.is_open()) // Check if the file is open
    {
        logfile << msg; // Write the log message to the file
    }
    else std::cout << "Unable to open file"; 

}

FileLogger::~FileLogger()
{
    if (logfile.is_open()) // Check if the file is open before closing
    {
        logfile.close(); // Close the file
    }
}