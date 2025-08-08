#pragma once
#include <iostream>
#include <string>
#include <limits>
using namespace std;

namespace InputOutputLibrary {

    void PrintMessage(string message) {
        cout << message << endl;
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