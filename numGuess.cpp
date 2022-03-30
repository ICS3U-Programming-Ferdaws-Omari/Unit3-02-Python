// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Sep 2019
// This program checks if ther is over 30 students

#include <iostream>

int main() {
    // this function checks if the number is 7
    const int GIVEN_NUMBER = 7;
    int numberGUESSED;

    // inp
    std::cout << "Insert a number between 0-9: ";
    std::cin >> numberGUESSED;
    std::cout << "" << std::endl;

    // This compares the number guessed to the number I chose and display if they got it right or wrong.
    if (numberGUESSED == GIVEN_NUMBER) {
        // output
        std::cout << "You guessed correctly!";
    if (numberGUESSED != GIVEN_NUMBER) {
        // output
        std::cout << "You guessed wrong";
    }
}