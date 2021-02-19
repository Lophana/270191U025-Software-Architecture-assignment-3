#pragma once

#include <sstream>
#include "logger.hpp"

template <typename T>
class TemplateCalculator
{
public:
    explicit TemplateCalculator(Logger *logger) : logger(logger)
    {
    }

    T sum(T a, T b)
    {
        return 0;
    }

    T multiply(T a, T b)
    {
        return 0;
    }

private:
    Logger *logger;
};