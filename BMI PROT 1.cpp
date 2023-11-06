/*
Start

[Initialize variables]
    weight, height, bmi, choice

Main Loop(repeat):
    Clear the screen

    Input weight in kilograms
    Input height in meters

    Calculate BMI as weight / (height * height)

    Display "Your BMI is: " + format(BMI, 2 decimal places)

    If BMI < 18.5:
        Display "You are underweight."
    ElseIf BMI < 24.9:
        Display "You are in a healthy weight range."
    ElseIf BMI < 29.9:
        Display "You are overweight."
    Else:
        Display "You are obese."

    Display "Do you want to calculate another BMI? (Y/N)"
    Input choice

Until choice is 'N' or 'n':

Until choice is 'Y' or 'y':
*/

#include <iostream>
#include <iomanip>
#include <cstdlib> 
using namespace std;

int main() {
    double weight, height, bmi;
    char choice;

    do {
        // Clear the screen
        system("cls"); 

        // Input weight and height
        cout << "Please enter your weight (in kilograms): ";
        cin >> weight;

        cout << "Please enter your height (in meters): ";
        cin >> height;

        // Calculation
        bmi = weight / (height * height);

        // Limit the result to two decimal places
        cout << fixed << setprecision(2);
        cout << "Your BMI is: " << bmi << endl;

        // If statements for BMI categories
        if (bmi < 18.5) {
            cout << "You are below the normal range." << endl;
        }
        else if (bmi < 24.9) {
            cout << "You are within the normal range." << endl;
        }
        else if (bmi < 29.9) {
            cout << "You are above the normal range" << endl;
        }
        else {
            cout << "You are extremely above the normal range" << endl;
        }

        // Loop
        cout << "Do you want to calculate another BMI? (Y/N): ";
        cin >> choice;
    } while (choice == 'Y' || choice == 'y');

    return 0;
}
