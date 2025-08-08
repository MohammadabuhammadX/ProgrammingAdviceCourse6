#pragma once
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

namespace NumberTheoryLibrary {

    bool IsPrime(int number) {
        if (number <= 1) return false;
        if (number == 2) return true;
        for (int i = 2; i <= sqrt(number); i++)
        {
            if (number % i == 0)
                return false;
        }
        return true;
    }

    bool IsPalindromeNumber(int number) {
        int original = number;
        int reversed = 0;
        while (number > 0) {
            int digit = number % 10;
            reversed = reversed * 10 + digit;
            number /= 10;
        }
        return original == reversed;
    }

    bool IsPerfect(int num) {
        int sum = 0;
        for (int i = 1; i < num; i++)
        {
            if (num % i == 0)
            {
                sum += i;
            }
        }
        return num == sum;
    }
}