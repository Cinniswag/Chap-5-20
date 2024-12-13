// Chap 5 20.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

double number;
double guess;

int main()
{
    number = rand();
    cout << "Guess my number." << endl;
    do {
        cin >> guess;

        if (guess < number) {
            cout << "Higher" << endl;
        }
        else if (guess > number) {
            cout << "Lower" << endl;
        }
    } while (guess > number || guess < number);
    cout << "YOU FOUND THE NUMBER!!! it was " << number << " :)" << endl;
}

// I actually really like this one. Very simple and fun seeing it work
