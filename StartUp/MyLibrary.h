#pragma once
#include <iostream>
using namespace std;

namespace MyLib 
{

	void Test() {

		cout << "Hi, this is my first fuction in my first library!" << endl;
	}

	void PrintMessage(string message)
	{
		cout << message << endl;
	}
}
