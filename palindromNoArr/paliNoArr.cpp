#include <iostream>

using namespace std;

#define L 5

int powInt(int base, int exp)
{
    int result = 1;
    for (int k = 0; k < exp; k++) {
        result *= base;
    }
    return result;
}

int main()
{
    int pal = 12321;

    for(int k = 0; k < L/2; k++) {
        int mul = powInt(10, k);
        int temp = pal / mul;
        mul = powInt(10, k + 1);
        int a = temp % mul;

        mul = powInt(10, L - k - 1);
        temp = pal / mul;
        mul = powInt(10, L - k);
        int b = temp % mul;

        cout << "bomber" << endl;
    }
}