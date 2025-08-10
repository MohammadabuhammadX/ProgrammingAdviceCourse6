#pragma once
#include <iostream>
using namespace std;

namespace MyStatisticsLibrary {

    int FindMax(int arr[100], int arrLength) {
        int maxOf = arr[0];
        for (int i = 0; i < arrLength; i++)
        {
            if (arr[i] > maxOf) {
                maxOf = arr[i];
            }
        }
        return maxOf;
    }

    int FindMin(int arr[100], int arrLength) {
        int min = arr[0];
        for (int i = 0; i < arrLength; i++)
        {
            if (arr[i] < min) {
                min = arr[i];
            }
        }
        return min;
    }

    int SumArray(int arr[100], int arrLength) {
        int sum = 0;
        for (int i = 0; i < arrLength; i++)
        {
            sum += arr[i];
        }
        return sum;
    }

    float AverageArray(int arr[100], int arrLength) {
        return (float)SumArray(arr, arrLength) / arrLength;
    }

    int CountOddInArray(int arr[], int arrLength) {
        int ctr = 0;
        for (int i = 0; i < arrLength; i++)
        {
            if (arr[i] % 2 != 0) {
                ctr++;
            }
        }
        return ctr;
    }

    int CountEvenInArray(int arr[], int arrLength) {
        int ctr = 0;
        for (int i = 0; i < arrLength; i++)
        {
            if (arr[i] % 2 == 0) {
                ctr++;
            }
        }
        return ctr;
    }

    int CountPositiveNumbersInArray(int arr[], int arrLength) {
        int ctr = 0;
        for (int i = 0; i < arrLength; i++)
        {
            if (arr[i] >= 0) {
                ctr++;
            }
        }
        return ctr;
    }

    int CountNegativeNumbersInArray(int arr[], int arrLength) {
        int ctr = 0;
        for (int i = 0; i < arrLength; i++)
        {
            if (arr[i] <= 0) {
                ctr++;
            }
        }
        return ctr;
    }
}