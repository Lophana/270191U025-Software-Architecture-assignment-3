#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "int_calculator.hpp"
#include "dummy_logger.hpp"
// See Catch2's documentation: https://github.com/catchorg/Catch2/blob/devel/docs/tutorial.md#scaling-up

TEST_CASE("IntCalculator")
{
    FileLogger logger("log.txt"); // Replaced DummyLogger with FileLogger
    IntCalculator calc(&logger);

    SECTION("sum")
    {
        // Sum calculations
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                calc.sum(i, j);
            }
        }

        // Read contents of log file buffer
        std::ifstream file(filename);
        std::stringstream buffer;
        buffer << file.rdbuf();
        std::string logContent = buffer.str();

        // Gets expected log message based on sum calculations
        std::stringstream expected;
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                expected << "taking the sum of: " << i << " and " << j << " which is " << i + j << "\n";
            }
        }

        // Compare the log content with the expected message
        REQUIRE(logContent == expected.str());
    }

    SECTION("multiply")
    {
        // Multiplication calculations
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                calc.multiply(i, j);
            }
        }

        // Read contents of the log buffer
        std::ifstream file(filename);
        std::stringstream buffer;
        buffer << file.rdbuf();
        std::string logContent = buffer.str();

        // Gets expected log message based on multiplication calculations
        std::stringstream expected;
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                expected << "taking the product of: " << i << " and " << j << " which is " << i * j << "\n";
            }
        }

        // Compare the log content with the expected message
        REQUIRE(logContent == expected.str());
    }
}

