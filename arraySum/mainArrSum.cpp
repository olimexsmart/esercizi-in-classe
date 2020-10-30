/*
    The program reads N numbers from the 
    user and prints the sum
*/

#include <iostream>

#define N 10

using namespace std;

int main()
{
    int numbers[N];

    // Getting numbers from the user
    cout << "Insert " << N << " numbers:" << endl;
    for (int i = 0; i < N; i++)
    {
        cin >> numbers[i];
    }
    
    // Adding up all the numbers
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += numbers[i];
    }

    // Compute result   
    cout << "Sum of numbers: " << sum << endl;
}