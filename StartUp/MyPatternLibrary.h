#pragma once
#include <iostream>
#include <string>
using namespace std;

namespace PatternLibrary {

    void PrintMultiplicationTable() {
        cout << "\n\t\t\t Multiplication Table From 1 to 10\n";
        cout << "\t";
        for (int i = 1; i <= 10; i++)
        {
            cout << i << "\t";
        }
        cout << "\n___________________________________________________________________________________\n";

        for (int i = 1; i <= 10; i++)
        {
            cout << " " << i;
            if (i < 10)
                cout << "   |";
            else
                cout << "  |";
            cout << "\t";
            for (int j = 1; j <= 10; j++)
            {
                cout << i * j << "\t";
            }
            cout << endl;
        }
    }

    void InvertedNumberPattern(int number) {
        for (int i = number; i >= 1; i--)
        {
            cout << endl;
            for (int j = i; j >= 1; j--)
            {
                cout << i;
            }
        }
    }

    void InvertedLetterPattern(int number) {
        for (int i = number; i >= 1; i--)
        {
            char letter = 'A' + (i - 1);
            cout << endl;
            for (int j = 1; j <= i; j++)
            {
                cout << letter;
            }
        }
    }

    void PrintWordsFromAAAtoZZZ() {
        char A = 'A';
        char Z = 'Z';
        for (char i = A; i <= Z; i++)
        {
            for (char j = A; j <= Z; j++)
            {
                for (char k = A; k <= Z; k++)
                {
                    cout << i << j << k << endl;
                }
            }
            cout << "\n";
        }
    }
}