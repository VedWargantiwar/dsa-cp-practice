// Write a program in C++ to display the first n terms of the Fibonacci series.

#include <iostream>
using namespace std;

int main()
{
    int n, b, c;
    int a = 1;
    c = 0;
    cout << "Input number of terms to display: ";
    cin >> n;

    cout << "Here is the Fibonacci series upto to " << n << " terms:";
    cout << '\n';
    cout << "0 ";

    for (int i = 1; i < n; i++)
    {
        cout << a << " ";
        b = a;
        a += c;
        c = b;
    }

    return 0;
}