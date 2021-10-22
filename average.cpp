// Copyright (c) 2021 Mikayla Barthelette All rights reserved
//
// Created by: Mikayla Barthelette
// Created on: Oct 2021
// This program calculates the average of 10 random numbers

#include <iostream>
#include <random>


main() {
    // this function calculates the average

    int randomNumbers[10];
    int aRandomNumber;
    int theSum = 0;
    float average;
    float amountOfNumbers = 10;

    // input

    std::cout << "Starting ..." << std::endl;
    std::cout << std::endl;

    // process
    for (int loop_counter = 0; loop_counter < 10; loop_counter++) {
        std::random_device rseed;
        std::mt19937 rgen(rseed());  // mersenne_twister
        std::uniform_int_distribution<int> idist(1 , 100);  // [1 , 100]
        aRandomNumber = idist(rgen);
        randomNumbers[loop_counter] = aRandomNumber;
        std::cout << "The random number is: " <<
        randomNumbers[loop_counter] << std::endl;
    }

    for (int loop_counter; loop_counter < 10; loop_counter++) {
        theSum = theSum + randomNumbers[loop_counter];
        average = theSum / amountOfNumbers;
    }

    // output
    std::cout << std::endl;
    std::cout << "The average is " << average << "." << std::endl;
    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
