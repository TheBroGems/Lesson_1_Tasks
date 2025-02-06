// Task_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // Prompt user to enter coordinate x1
    cout << "Please enter coordiante for x1: ";

    // Get x1
    float x1;
    cin >> x1;

    // Prompt user to enter coordinate y1
    cout << "Please enter coordiante for y1: ";

    // Get y1
    float y1;
    cin >> y1;

    // Prompt user to enter coordinate x2
    cout << "Please enter coordiante for x2: ";

    // Get x2
    float x2;
    cin >> x2;

    // Prompt user to enter coordinate y2
    cout << "Please enter coordiante for y2: ";

    // Get y2
    float y2;
    cin >> y2;

    // Calculate Distance
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Display info
    cout << "The distance is " << distance << endl;
}