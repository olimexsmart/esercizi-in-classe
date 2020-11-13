#include "paliStr.hpp"
#include <cstring>
#include <ctype.h>

#define L 100

bool isPalindromeStr(char toCheck[], int len) {
    char cleanStr[L];
    
    // Strip string of punctuation character and lower all letters
    int offset = 0;
    int i;
    for (i = 0; i < len; i++) {
        if(!ispunct(toCheck[i])) {
            cleanStr[i - offset] = tolower(toCheck[i]);
        } else {
            offset++; // Counting how many punctuation points we have skipped
        }
    }
    // i is incremented one last time before
    // exiting the for loop (that's why is exits actually)
    // so we do not need to increment one here
    cleanStr[i - offset] = '\0';
    
    
    // Check if palindrome
    int cleanLen = strlen(cleanStr);
    for(i = 0; i < cleanLen / 2; i++) {
        // Compare beginning and end of the string
        if(cleanStr[i] != cleanStr[cleanLen - i - 1]) {
            return false;
        }
    }
    
    return true;
}