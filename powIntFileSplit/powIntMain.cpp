/*
    Write a function that computes x^y
    Integer computation.
*/

#include <iostream>
#include "powInt.hpp"

using namespace std;

int main()
{
    int x, y;

    // User prompt
    cout << "Insert base x: ";
    cin >> x;

    cout << "Insert exponent y: ";
    cin >> y;

    // Print result
    cout << x << "^" << y << " = "
         << powInt(x, y) << endl;
}
