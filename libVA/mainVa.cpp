/*
    Main to test libVA
*/
#include "libVA.hpp"
#include "theStruct.hpp"
#include <cstdlib>
#include <iostream>

using namespace std;

#define RANDINSERT 20

int main()
{
    theStruct** VA = initVA(10);

    for (int i = 0; i < RANDINSERT; i++) {
        theStruct* s = new theStruct;
        s->num = i;

        VA = addToVA(VA, s);
    }

    cout << "Fill complete" << endl;

    // Print
    /*
    theStruct * reader;
    int i = 0;
    while((reader = getVAElement(VA, i)) != NULL) {
        cout << reader->num << endl;
        i++;
    }
    */

    for (int i = 0; getVAElement(VA, i) != NULL; i++)
    {
        cout << getVAElement(VA, i)->num << endl;
    }
    

    destroyVA(VA);
}