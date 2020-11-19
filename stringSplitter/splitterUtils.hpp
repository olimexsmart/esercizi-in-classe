#ifndef SPLITTERUTILS_H
#define SPLITTERUTILS_H

#include <cstdlib>

// Emulation of strchr
// Step 1 - tokenFinder
char * tokenFinder(char * str, char token) {
    while(*str != token) {
        if(*str == '\0') 
            return NULL;

        str++;
    }

    return str;
}

#endif