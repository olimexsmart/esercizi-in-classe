/*
    program that counts char occurrences in strings
*/

#include <cstring>
#include <fstream>
#include <iostream>
#include "charCounterFuncs.hpp"

using namespace std;

#define L 1000
#define FILENL 30
#define ALPHALEN 26


int main()
{
    int alphabet[ALPHALEN] = {};
    char input[L];

    // Read string from console
    /*
    cout << "Enter string to check: ";
    cin.getline(input, sizeof(input));

       cout << "Examined " << countChars(input, alphabet)
     << "chars." << endl;
    */

    // Extended exercise
    int totChars = 0;
    cout << "Enter filename to process: ";
    cin.getline(input, sizeof(input));
    string line;
    ifstream fileHandle(input);
    if (fileHandle.is_open()) {
        while (getline(fileHandle, line)) {
            const char * cStr = line.c_str();

            totChars += countChars(cStr, alphabet);
        }
        
        fileHandle.close();

        cout << "Examined " << totChars << " chars." << endl;
    } else {
        cout << "Error opening file" << endl;
        return -1;
    }

    for (int i = 0; i < ALPHALEN; i++) {
        cout << (char)(i + OFFSET) << "\t" << alphabet[i] << endl;
    }
}