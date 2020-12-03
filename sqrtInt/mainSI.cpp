/*
    Integer version of sqrt
*/

#include <iostream>
#include <sstream>

using namespace std;

int convertString(char* str);
int sqrtInt(int n) {
    int b = 2;
    
    while(b * b <= n) b++;

    return b - 1;
}

int main(int argc, char* argv[]) // Same stuff since [] is pointer type
{
    int x = 1;
    if (argc == 2) {
        // Converting base
        x = convertString(argv[1]);

        // Print result
        cout << x << "^(1/2) = "
             << sqrtInt(x) << endl;
    } else {
        cout << "Wrong number of input args!" << endl;
    }

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
