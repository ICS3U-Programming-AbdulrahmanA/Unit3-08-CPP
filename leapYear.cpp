// Copyright (c) 2025 Abdul All rights reserved.
// Created By : Abdul
// Date : November 3rd, 2025
// This program checks whether a given year is a leap year

#include <iostream>
#include <string>

int main() {
    std::string yearAsString;
    std::cout << "Please enter a year: ";
    std::cin >> yearAsString;

    try {
        int year = std::stoi(yearAsString);

        if (year % 4 == 0) {
            if (year % 100 == 0) {
                if (year % 400 == 0) {
                    std::cout << year << " is a leap year.\n";
                } else {
                    std::cout << year << " is not a leap year.\n";
                }
            } else {
                std::cout << year << " is a leap year.\n";
            }
        } else {
            std::cout << year << " is not a leap year.\n";
        }
    } catch (std::invalid_argument) {
        std::cout << yearAsString << " is not an integer.\n";
    }
}
