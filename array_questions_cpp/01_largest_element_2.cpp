// Write a C++ program to find the largest element of a given array of integers.
// second solution that i will try to find on my own.

#include <iostream>
using namespace std;

int main()
{
    int n, a;

    cout << "please enter the number of integers." << '\n';
    cin >> n;
    int array[n];
    cout << "please enter the integers wiht a space." << '\n';

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    
    a = array[0];
    for (int i = 0; i < (n - 1) ; i++)
    {
        if (a < array[i + 1])
        {
            a = array[i + 1];
        }

    }

    cout << "the largest integer is: " << a;

    return 0;
}