// Copyright (c) 2021 Crestel Ong All rights reserved
//
// Created by: Crestel Ong
// Created on: September 2021
// This is the Addition program
//  users input the numbers to be added

#include <iostream>


int main() {
    // this fuction calculates the sum of two numbers
    int first_number;
    int second_number;
    int sum;

    // input
    std::cout << "Enter the first number (integer) to add:  ";
    std::cin >> first_number;
    std::cout << "Enter the second number (integer) to add:  ";
    std::cin >> second_number;

    // process
    sum = first_number + second_number;

    // output
    std::cout << "" << std::endl;
    std::cout << first_number << " + " << second_number << " = " << sum <<
    std::endl;

    std::cout << "" << std::endl;
    std::cout << "Done." << std::endl;
}
