/*
    Write a function that computes x^y
    Integer computation.
*/

#include <iostream>

using namespace std;

// Otherwise error: ‘powInt’ was not declared in this scope
int powInt(int base, int exp);

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

int powInt(int base, int exp)
{
    int result = 1;
    for (int k = 0; k < exp; k++) {
        result *= base;
    }
    return result;
}