#include <sstream>
#include <iostream>
#include "batchFuncs.hpp"

using namespace std;


int convertString(char* str)
{
    std::string input(str);
    std::stringstream strStream(input);

    int result;

    strStream >> result;

    if (!str) {
        // The conversion failed
        cout << "Failed parsing input parameters" << endl;
    }

    return result;
}

float FtoK(float in)
{
    return (in - 32) * (5.0f / 9.0f) + 273.15f;
}

float CtoK(float in)
{
    return in + 273.15f;
}
