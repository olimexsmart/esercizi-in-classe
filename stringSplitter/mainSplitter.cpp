/*
    Program that splits strings, given a token
*/

#include "splitterUtils.hpp"
#include <cstring>
#include <iostream>

using namespace std;

#define LEN 100
#define TEMPLEN 25

int main()
{
    char toSplit[LEN] = "ciao come va";
    char temp[TEMPLEN];
    char tokenBuff[2];
    char token = ' ';
/*
    cout << "Enter string to split: ";
    cin.getline(toSplit, LEN);

    cout << "Enter token: ";
    cin.getline(tokenBuff, 2);
    token = tokenBuff[0];
*/
    char* startP = toSplit;
    char* endP;
    // endP = tokenFinder(startP, token);
    while ((endP = tokenFinder(startP, token)) != NULL) {
        // Step 2 - string copy
        /*
        char* pTemp = temp;
        for (char* p = startP; p < endP; p++, pTemp++) {
            *pTemp = *p;
        }
        *pTemp = '\0';
        */

       strncpy(temp, startP, (endP - startP));
       temp[endP - startP] = '\0';

        // Step 3 - print string
        cout << temp << endl;

        startP = endP + 1;
    }
    cout << startP << endl;
}