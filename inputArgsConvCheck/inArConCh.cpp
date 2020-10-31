/*
    Checking input arguments and converting them
    Here example with powInt function
*/

#include <iostream>
#include <sstream>
#include "powInt.hpp"

using namespace std;

int convertString(char* str);

// int main(int argc, char *argv[]) Same stuff since [] is pointer type
int main(int argc, char** argv)
{
    int x = 1;
    int y = 1;
    if (argc == 3) {
        // Converting base
        x = convertString(argv[1]);
        y = convertString(argv[2]);
    }

    // Print result
    cout << x << "^" << y << " = "
         << powInt(x, y) << endl;

    return 0;
}

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
