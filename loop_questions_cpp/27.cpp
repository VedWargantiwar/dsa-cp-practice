// Write a program in C++ to display the first n terms of the Fibonacci series.

#include <iostream>
using namespace std;

int main()
{
    int n;
    int a = 1;
    cout << "Input number of terms to display: ";
    cin >> n;
    int array[n];
    cout << "Here is the Fibonacci series upto to " << n << " terms:";
    cout << '\n';
    cout << "0 ";
    array[0] = 0;
    for (int i = 1; i < n; i++)
    {
        cout << a << " ";
        array[i] = a;
        a += array[i - 1];
    }

    return 0;
}