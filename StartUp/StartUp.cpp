#include <iostream>
#include "MyMathLibrary.h";
#include "MyNumberTheoryLibrary.h";
#include "MyArrayLibrary.h";
#include "MyInputOutputLibrary.h";
#include "MyRandomLibrary.h";
#include "MyStringLibrary.h";
#include "MyPatternLibrary.h";
#include "MyStatisticsLibrary.h";

using namespace std;


int main() {

    RandomLibrary::SeedRandom();

    InputOutputLibrary::PrintMessage("Welcome to the program!");

    PatternLibrary::PrintMultiplicationTable();

    return 0;
}