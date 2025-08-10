#pragma once
#include <iostream>
#include <string>
#include <limits>
using namespace std;

namespace MyInputOutputLibrary {

    void PrintMessage(string message) {
        cout << message << endl;
    }
    string PrintMessageAndReturn(string message) {
        cout << message << endl;
        return message;
    }

    int ReadPositiveNumber(string message) {
        int num;
        cout << message << endl;
        do
        {
            cin >> num;
        } while (num < 0);
        return num;
    }

    int ReadNumber(string message) {

        int num;
        cout << message << endl;
        cin >> num;

        while(cin.fail()){

            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "Invalid Number, Enter a valid One" << endl;

            cin >> num;
        }
        return num;
    }

    int ReadPositiveNumber(string message, int min, int max) {
        int num;
        cout << message << endl;
        do
        {
            cin >> num;
        } while (num < min || num > max);
        return num;
    }

    float ReadFloatNumber(string message) {
        float Number;
        cout << message;
        cin >> Number;
        return Number;
    }
}