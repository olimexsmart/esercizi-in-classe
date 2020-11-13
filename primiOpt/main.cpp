/*
    Comparing optimized version with old prime method
*/

#include "prime.hpp"
#include <iostream>
#include <chrono> 
using namespace std::chrono; 

using namespace std;

int main()
{
    int max;
    cout << "Insert upper bound of prime computation: ";
    cin >> max;

    // Using old method
    int countPrimes = 0;
    auto start = high_resolution_clock::now(); 
    for (int i = 0; i < max; i++) {
        if (isPrime(i)) {
            countPrimes++;
        }
    }
    auto stop = high_resolution_clock::now(); 
    auto duration = duration_cast<milliseconds>(stop - start);

    cout << "Old version found " << countPrimes
         << " prime numbers in " << duration.count() << "ms." << endl;

    // Using optimized method
    countPrimes = 0;
    start = high_resolution_clock::now(); 
    for (int i = 0; i < max; i++) {
        if (isPrimeOpt(i)) {
            countPrimes++;
        }
    }
    stop = high_resolution_clock::now();
    duration = duration_cast<milliseconds>(stop - start); 

    cout << "New version found " << countPrimes
         << " prime numbers in " << duration.count() << "ms." << endl;
}