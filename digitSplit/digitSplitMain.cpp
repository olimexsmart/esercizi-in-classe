/*
    Program tat splits number
    into digits
*/

#include <iostream>
#include "splitter.hpp"
using namespace std;

int main() {
    int number, index;
    cout << "Insert number to split up: ";

    cin >> number;

    cout << "Insert index: " << endl;

    cin >> index;

    cout << splitter(number, index);
}