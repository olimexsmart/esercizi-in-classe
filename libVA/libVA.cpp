

#include "libVA.hpp"
#include <cstdlib>
#include <iostream>

theStruct** initVA(int l)
{

    theStruct** VA = new theStruct*[l];

    VA[0] = new theStruct;
    VA[0]->VALength = l;

    for (int i = 1; i < l; i++) {
        VA[i] = NULL;
    }

    return VA;
}

theStruct** addToVA(theStruct** VA, theStruct* element)
{
    int VALength = VA[0]->VALength;

    // Step 1 - Find first unassigned pointer in the array
    int i = 1;
    while (i < VALength && VA[i] != NULL)
        i++;

    // Decide if we need a bigger array
    if (i >= VALength) {
        std::cout << "VA full. Creating a bigger one" << std::endl;
        // Step A - New bigger array
        theStruct** VAnew = initVA(VALength + INCREMENT);

        // Step B - Copy old pointer values
        for (int k = 1; k < VALength; k++) {
            VAnew[k] = VA[k];
        }

        // Step C - Delete old array
        delete[] VA;

        // Step 3 - save element pointer in the array
        VAnew[VALength] = element;
        return VAnew;

    } else {
        std::cout << "Simply adding element" << std::endl;
        // Step 3 - save element pointer in the array
        VA[i] = element;
        return VA;
    }
}

void destroyVA(theStruct** VA) {
    int VALength = VA[0]->VALength;

    // Delets all structs allocated by user
    for (int i = 0; i < VALength; i++)
    {
        delete VA[i];
    }

    delete[] VA;
}

theStruct* getVAElement(theStruct** VA, int index) {
    int VALength = VA[0]->VALength;

    if(index >= VALength - 1)
        return NULL;

    return VA[index + 1];
}