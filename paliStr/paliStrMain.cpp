/*
    Program that given a string,
    prints out if is palindrome or not
*/

#include <iostream>
#include <cstring>
#include "paliStr.hpp"

using namespace std;

#define L 100

int main()
{
    cout << "Enter string to check: ";

    char input[L];
    // This instead of simple cin because it reads also spaces
    cin.getline(input,sizeof(input));
    
    // "ciao" -> ciao\0 check this with debugger
    // Stop execution on the if and hover with 
    // the mouse over variable input to see this

    if (isPalindromeStr(input, strlen(input))) {
        cout << "is palindrome" << endl;
    } else {
        cout << "is not palindrome" << endl;
    }

    return 0;
}
