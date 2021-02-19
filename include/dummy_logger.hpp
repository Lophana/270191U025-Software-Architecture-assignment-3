#pragma once
#include <string>

#include "logger.hpp"

class DummyLogger : public Logger
{
public:
    virtual void log(std::string msg) override;
};