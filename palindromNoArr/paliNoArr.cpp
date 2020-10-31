/*
    Program that given a number,
    prints out if is palindrome or not
*/

#include <iostream>
#include "paliUtilis.hpp"

using namespace std;

#define L 5

int main()
{
    cout << "Enter number to check if palindrome: ";

    int n;
    cin >> n;

    // if (isPalindrome(n, L))
    if (isPalindrome(n)) {
        cout << "is palindrome" << endl;
    }
    else {
        cout << "is not palindrome" << endl;
    }
}