// Copyright (c) 2025 Gustav I
// Created By: Gustav I
// Date: April 22, 2025
// This program asks the user for the user's celsius
// and converts it to fahrenheit

#include <iostream>  // For input/output

// Function that handles everything: input, calculation, and output
void fahrenheit() {
    double celsius, fahrenheit;

    std::cout << "Enter temperature in Celsius: ";

    // Simple error handling for invalid input using try-catch
    try {
        if (!(std::cin >> celsius)) {
            throw "Invalid input! Please enter a valid numeric value.";
        }

        // Convert Celsius to Fahrenheit using the formula
        fahrenheit = (9.0 / 5) * celsius + 32;

        // Display the result
        std::cout << "Temperature in Fahrenheit is: "
        << fahrenheit << std::endl;
    } catch (const char* msg) {
        std::cout << msg << std::endl;
        // Clear the error state after catching the exception
        std::cin.clear();
    }
}

int main() {
    fahrenheit();  // Call the fahrenheit function
    return 0;
}
