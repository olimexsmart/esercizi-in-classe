#include <iostream>

using namespace std;

int main()
{
    int N = 43;

    if (N == 0 || N == 1) {
        cout << "NON primo";
        return 0;
    }

    for (int i = 2; i <= N / 2; ++i) {
        if (N % i == 0) {
            cout << "NON primo";
            return 0;
        }
    }

    cout << "primo";
    return 0;
}