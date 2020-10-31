#include "powInt.hpp"

int powInt(int base, int exp)
{
    int result = 1;
    for (int k = 0; k < exp; k++) {
        result *= base;
    }
    return result;
}