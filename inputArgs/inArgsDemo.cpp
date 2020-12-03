/*
    Simplest demo for input arguments
*/

#include <iostream>

using namespace std;

//int main(int argc, char** argv)
int main(int argc, char *argv[]) // Same stuff since [] is pointer type
{
    for (int i = 0; i < argc; i++) {
        cout << argv[i] << endl;
    }

    return 0;
}