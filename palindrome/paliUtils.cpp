#include "paliUtilis.hpp"
#include "powInt.hpp"
#include "splitter.hpp"

int getNOfDigits(int number)
{
    // Check the power of 10 we surpass
    int n = 0;
    while (number > powInt(10, n))
        n++;

    return n;
}

// NOTICE how default parameter value is not repeated here
bool isPalindromeNoArr(int num, int len)
{
    // If len is negative, we have to understand the length
    // of the number ourselves
    if (len < 0) {
        len = getNOfDigits(num);
    }
    for (int k = 0; k < len / 2; k++) {
        // Compare two opposite digits
        // Since the we index starting from zero, we need to subtract 1
        if (splitter(num, k) != splitter(num, len - k - 1)) {
            return false;
        }
    }
    return true;
}


bool isPalindromeArr(int num, int len) {
    
    if (len < 0) {
        len = getNOfDigits(num);
    }    

    // We are supposing a max length of 25 digits
    if (len > 25) {
        return false;
    }
    int digits[25];

    // Splitting all the digits into an array
    for (int i = 0; i < len; i++)
    {
        digits[i] = splitter(num, i);
    }
    
    // Cheking that 
    for (int i = 0; i < len / 2; i++) {
        if (digits[i] != digits[len - i - 1]) {
            return false;
        }
    }

    return true;
}
