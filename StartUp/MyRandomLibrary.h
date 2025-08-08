#pragma once
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

namespace RandomLibrary {

    int RandomNumber(int From, int To) {
        return rand() % (To - From + 1) + From;
    }

    void SeedRandom() {
        srand((unsigned)time(NULL));
    }

    char GetRandomCapitalLetter() {
        return char(RandomNumber(65, 90));
    }

    char GetRandomSmallLetter() {
        return char(RandomNumber(97, 122));
    }

    char GetRandomDigit() {
        return char(RandomNumber(48, 57));
    }

    char GetRandomSpecialCharacter() {
        return char(RandomNumber(33, 47));
    }
}