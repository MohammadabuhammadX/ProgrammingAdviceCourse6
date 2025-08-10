#pragma once
#include <iostream>
#include <string>
using namespace std;

namespace MyArrayLibrary {

    const int MAX_SIZE = 100;

    void PrintArray(int arr[], int arrLength)
    {
        for (int i = 0; i < arrLength; i++)
            cout << arr[i] << " ";
        cout << "\n";
    }

    void CopyArray(int arrSource[100], int arrDestination[100], int arrLength)
    {
        for (int i = 0; i < arrLength; i++)
            arrDestination[i] = arrSource[i];
    }

    void CopyReversedArray(int arrSource[100], int arrDestination[100], int arrLength)
    {
        for (int i = 0; i < arrLength; i++) {
            arrDestination[i] = arrSource[arrLength - 1 - i];
        }
    }

    void AddArrayElement(int number, int arr[], int& arrLength) {
        arrLength++;
        arr[arrLength - 1] = number;
    }

    bool IsPalindromeArray(int arr[], int& arrLength) {
        for (int i = 0; i < arrLength; i++)
        {
            if (arr[i] != arr[arrLength - i - 1]) {
                return false;
            }
        }
        return true;
    }

    int TimesRepeated(int Number, int arr[100], int arrLength)
    {
        int count = 0;
        for (int i = 0; i <= arrLength - 1; i++)
        {
            if (Number == arr[i])
            {
                count++;
            }
        }
        return count;
    }
}