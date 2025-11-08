#pragma once
#include <stdexcept> // Required for std::runtime_error
#include <cmath>     // Required for std::pow

/**
 * @brief Performs a basic arithmetic operation on two numbers.
 * @param x The first operand.
 * @param op The operator character (+, -, *, /, ^).
 * @param y The second operand.
 * @return The result of the operation.
 * @throws std::runtime_error if division by zero is attempted or an invalid operator is provided.
 */
inline double calc(double x, char op, double y)
{
    switch (op)
    {
        case '+':
            return x + y;
        case '-':
            return x - y;
        case '*':
            return x * y;
        case '/':
            if (y == 0)
            {
                throw std::runtime_error("Error: Division by zero is not allowed.");
            }
            return x / y;
        case '^':
            return std::pow(x, y);
        default:
            throw std::runtime_error("Error: Invalid operator provided.");
    }
}