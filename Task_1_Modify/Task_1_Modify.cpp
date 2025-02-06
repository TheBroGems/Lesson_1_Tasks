// Task_1_Modify.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    // Prompt user to enter first number
    cout << "Please enter first number: ";

    // Get number 1
    int number1;
    cin >> number1;

    // Prompt user to enter second number
    cout << "Please enter second number: ";

    // Get number 2
    int number2;
    cin >> number2;

    // Prompt user to enter third number
    cout << "Please enter third number: ";

    // Get number 3
    int number3;
    cin >> number3;

    // Prompt user to enter fourth number
    cout << "Please enter fourth number: ";

    // Get number 4
    int number4;
    cin >> number4;

    // Prompt user to enter fifth number
    cout << "Please enter fifth number: ";

    // Get number 5
    int number5;
    cin >> number5;

    // Display average
    int average = (int)((number1 + number2 + number3 + number4 + number5) / 5);
    cout << "The average is " << average << endl;
}