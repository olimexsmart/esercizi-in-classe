/*
    Bubble sort implementation:
    sorting an array
*/
#include "bubbleSort.hpp"
#include <chrono>
#include <cstdlib>
#include <iostream>
#include <time.h>
using namespace std::chrono;

using namespace std;

#define LEN 10
#define MAX_RAND 100

int main()
{
    // srand (time(NULL));
    srand(42);
    int toBeSorted[LEN];
    for (int i = 0; i < LEN; i++) {
        toBeSorted[i] = rand() % MAX_RAND;
    }

    printArr(toBeSorted, LEN);

    // Sort array
    int result[LEN];
    bubbleSort(toBeSorted, result, LEN);
    printArr(result, LEN);

    // Optimized version
    bubbleSortOpt1(toBeSorted, result, LEN);
    printArr(result, LEN);
}