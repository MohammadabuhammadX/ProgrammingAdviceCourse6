#pragma once
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

namespace MyMathLibrary {

    float GetFractionPart(float Number)
    {
        return Number - int(Number);
    }

    float MySqrt(float Number)
    {
        return pow(Number, 0.5);
    }

    int MyRound(float Number)
    {
        int IntPart;
        IntPart = int(Number);
        float FractionsPart = GetFractionPart(Number);
        if (abs(FractionsPart) >= 0.5)
        {
            if (Number > 0)
                return ++IntPart;
            else
                return --IntPart;
        }
        else
        {
            return IntPart;
        }
    }

    int MyFloor(float Number)
    {
        if (Number > 0)
            return int(Number);
        else
            return int(Number) - 1;
    }

    int MyCeil(float Number)
    {
        if (abs(GetFractionPart(Number)) > 0)
        {
            if (Number > 0)
                return int(Number) + 1;
            else
                return int(Number);
        }
        else
            return Number;
    }
}