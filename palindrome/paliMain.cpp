/*
    Program that given a number,
    prints out if is palindrome or not
*/

#include "paliUtilis.hpp"
#include <iostream>

using namespace std;

#define L 5

int main()
{
    cout << "Enter number to check if palindrome: ";

    int n;
    cin >> n;

    // if (isPalindromeArr(n, L))
    if (isPalindromeArr(n)) {
        cout << "is isPalindromeArr" << endl;
    } else {
        cout << "is not isPalindromeArr" << endl;
    }

    // if (isPalindromeNoArr(n, L))
    if (isPalindromeNoArr(n)) {
        cout << "is isPalindromeNoArr" << endl;
    } else {
        cout << "is not isPalindromeNoArr" << endl;
    }

    return 0;
}