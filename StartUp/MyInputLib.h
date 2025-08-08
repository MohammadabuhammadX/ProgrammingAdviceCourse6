#pragma once

#include<iostream>

using namespace std;

namespace MyInputLib {

	int ReadNumber() {
		int number;

		cout << "Please Enter Yout Number ? \n";

		cin >> number;

		return number;
	}

}