#ifndef PALIUTILS_H
#define PALIUTILS_H

// Given a number, returns of how many digits is composed
int getNOfDigits(int number);

// Checks if num is palindrome, takes the length
// of the number as optional parameter
// Not using arrays
// This version is better
bool isPalindromeNoArr(int num, int len = -1);

// Same as the previous one
// but using arrays
bool isPalindromeArr(int num, int len = -1);


#endif