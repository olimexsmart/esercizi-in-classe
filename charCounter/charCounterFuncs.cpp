#include "charCounterFuncs.hpp"
#include <cctype>

int countChars(const char toCount[], int alphabet[])
{
    int i = 0;
    char c = toCount[0];

    // for(int i = 0; toCount[i] != '\0': i++)
    while (c != '\0') {
        if (isalpha(c)) {
            c = tolower(c);

            alphabet[c - OFFSET]++;
        }

        i++;
        c = toCount[i];
    }

    return i;
}