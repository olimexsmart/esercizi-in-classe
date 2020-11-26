/*
    Program that given a string,
    prints out if is palindrome or not
*/

#include <iostream>
#include <cstring>
#include "paliStr.hpp"

using namespace std;

int main()
{
    /*
    int maxLen;
    cout << "Enter max string length: ";
    cin >> maxLen;
    char * input = new char[maxLen];
    */
    char input[1000];

    cout << "Enter string to check: ";
    // This instead of simple cin because it reads also spaces
    //cin.getline(input, 10); // Dummy call to reset console
    cin.getline(input, sizeof(input));
    
    // "ciao" -> ciao\0 check this with debugger
    // Stop execution on the if and hover with 
    // the mouse over variable input to see this

    if (isPalindromeStrCleanBefore(input)) {
        cout << "is palindrome" << endl;
    } else {
        cout << "is not palindrome" << endl;
    }

    //delete[] input;

    return 0;
}
