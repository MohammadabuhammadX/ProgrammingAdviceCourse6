#pragma once
#include <iostream>
#include <string>
using namespace std;

namespace MyStringLibrary {

    string ReadText()
    {
        string Text;
        cout << "Please enter Text?\n";
        getline(cin, Text);
        return Text;
    }

    string EncryptText(string Text, short EncryptionKey)
    {
        for (int i = 0; i < Text.length(); i++)
        {
            Text[i] = (int)Text[i] + EncryptionKey;
        }
        return Text;
    }

    string DecryptText(string Text, short EncryptionKey)
    {
        for (int i = 0; i < Text.length(); i++)
        {
            Text[i] = (int)Text[i] - EncryptionKey;
        }
        return Text;
    }

    void ReverseString(string& str) {
        int len = str.length();
        for (int i = 0; i < len / 2; i++) {
            swap(str[i], str[len - 1 - i]);
        }
    }
}