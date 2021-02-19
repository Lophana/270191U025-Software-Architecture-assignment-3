#pragma once
#include <string>

#include "logger.hpp"

class PrintLogger : public Logger
{
public:

    virtual void log(std::string msg) override;
};