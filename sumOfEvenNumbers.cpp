// Copyright (c) 2021 Trent Hodgins All rights reserved

// Created by Trent Hodgins
// Created on 10/27/2021
// This is the sum_of_numbers Mark program
// The program asks the user to enter in the amount of numbers they want to add
// Then the program asks the user to enter in the numbers to add
// Then the program calculates and displays the sum of the even numbers

#include <iostream>
#include <list>


float Sum_of_numbers_numb(std::list<int> listOfNumbers) {
    // This program uses a list to find the sum of the even numbers
    int numberInList;
    int total = 0;

    for (int element : listOfNumbers) {
        if (element % 2 == 0) {
            total = total + element;
        }
    }

    return total;
}


int main() {
    // This function uses a list to get listOfNumbers
    std::list<int> listOfNumbers;
    int calculate = 0;
    int amountOfNumbers = 0;
    int tempNum;
    std::string tempStr;
    std::string amount;
    int loopCounter = 0;

    std::cout << "How many numbers would you like to add: ";
    std::cin >> amount;
    std::cout << "" << std::endl;

    try {
        amountOfNumbers = std::stoi(amount);
        for (loopCounter; loopCounter < amountOfNumbers; loopCounter++) {
            std::cout << "Number to add: ";
            std::cin >> tempStr;
            tempNum = std::stoi(tempStr);
            listOfNumbers.push_back(tempNum);
        }

        calculate = Sum_of_numbers_numb(listOfNumbers);
        std::cout << "\nThe sum of the even numbers is "
                  << calculate << std::endl;
    } catch (std::invalid_argument) {
            std::cout << "\nInvalid input" << std::endl;
        }

    std::cout << "\nDone."<< std::endl;
}
