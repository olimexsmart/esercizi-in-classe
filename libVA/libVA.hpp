#ifndef LIBVA_H
#define LIBVA_H

#include "theStruct.hpp"

#define INCREMENT 2

// Initialize new Variable Array
theStruct** initVA(int l);

// Add element to VA
theStruct** addToVA(theStruct** VA, theStruct* element);

// Destroy VA
void destroyVA(theStruct** VA);

// Element getter
theStruct* getVAElement(theStruct** VA, int index);

#endif