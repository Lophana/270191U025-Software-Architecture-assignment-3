#pragma once

#include <sstream>
#include "logger.hpp"

template <typename T>
class TemplateCalculator
{
public:
    explicit TemplateCalculator(Logger *logger) : logger(logger) {}

    T sum(T a, T b)
    {
        log("taking the sum of: " + std::to_string(a) + " and " + std::to_string(b) + " which is " + std::to_string(a + b));
        return a + b;
    }

    T multiply(T a, T b)
    {
        log("taking the product of: " + std::to_string(a) + " and " + std::to_string(b) + " which is " + std::to_string(a * b));
        return a * b;
    }


private:
    Logger *logger;

    void log(std::string message)
    {
        if (logger)
            logger->log(message);
    }
};