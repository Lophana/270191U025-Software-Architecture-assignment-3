#include <sstream>

#include "int_calculator.hpp"

IntCalculator::IntCalculator(Logger *logger) : logger(logger) {}

int IntCalculator::sum(int a, int b)
{
    // Perform the sum operation
    int result = a + b;

    // Log the operation
    if (logger)
    {
        std::stringstream logMessage;
        logMessage << "Addition:\n";
        logMessage << "Taking the sum of: '" << a << "' and '" << b << "' which is '" << result << "'";
        logger->log(logMessage.str());
    }

    return result;
}

int IntCalculator::multiply(int a, int b)
{
    // Perform the multiplication operation
    int result = a * b;

    // Log the operation
    if (logger)
    {
        std::stringstream logMessage;
        logMessage << "Multiplication:\n";
        logMessage << "Taking the product of: '" << a << "' and '" << b << "' which is '" << result << "'";
        logger->log(logMessage.str());
    }

    return result;
}