#include "prime.h"
#include <iostream>

using namespace std;

int main()
{
    int n = 31;

    // cout << "Enter a positive integer: ";
    // cin >> n;

    if (isPrime(n))
        cout << n << " is a prime number";
    else
        cout << n << " is not a prime number";
}