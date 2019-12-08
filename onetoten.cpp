// Copyright (c) 2019 Joseph Palermo All rights reserved.
//
// Created by: Joseph Palermo
// Created on: December 2019
// This program adds 10 random numbers to an array and calculates the average

#include <iostream>
#include <ctime>

int main() {
    // this function adds 10  numbers to an array and calculates the average

    // seed
    unsigned int seed = time(NULL);

    // variables & arrays
    int randomNumber;
    int numberSum = 0;
    float numberAverage;
    int numberArray[10];

    // process
    try {
        for (int loopCounter = 0; loopCounter < 10; loopCounter++) {
            randomNumber = rand_r(&seed) % 100;
            numberArray[loopCounter] = randomNumber;
            std::cout << numberArray[loopCounter] << std::endl;
            numberSum = numberSum + numberArray[loopCounter];
    }

    numberAverage = numberSum/10.0;
    } catch (std::invalid_argument) {
        std::cout << "Something went wrong, please try again";
    }
    // output
    std::cout << "The average of your numbers is " << numberAverage;
}
