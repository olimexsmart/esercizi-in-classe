#include "powInt.hpp"
#include "splitter.hpp"
#include <iostream>
#include <sstream>

using namespace std;

int convertString(char* str);
bool isAmstrong(int num, int len);

int main(int argc, char* argv[]) // Same stuff since [] is pointer type
{
    // Get from cdm
    if (argc != 2) {
        cout << "Wrong number of arguments" << endl;
        return 0;
    }
    // 1000 0000
    int n = convertString(argv[1]);

    // Compute limits
    int start = powInt(10, n - 1);
    int end = powInt(10, n);

    cout << "Found: ";
    for (int i = start; i < end; i++) {
        if (isAmstrong(i, n)) {
            cout << i << ", ";
        }
    }

    cout << endl;
}

bool isAmstrong(int num, int len)
{
    int sum = 0;

    for (int i = 0; i < len; i++) {
        int digit = splitter(num, i);
        sum += powInt(digit, len);
    }

    return sum == num;
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