// Task_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    // Prompt user to enter a length in inches
    cout << "Please enter a length: ";

    // Get inches
    float inches;
    cin >> inches;

    // Convert inches to feet
    float feet = inches / 12.0f;

    // Convert inches to meter
    float meters = inches / 39.37;

    // Display info
    cout << inches << " Inches is " << feet << " Feet" << endl;
    cout << inches << " Inches is " << meters << " Meters" << endl;
}

