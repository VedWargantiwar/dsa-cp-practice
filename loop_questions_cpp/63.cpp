// Write a program in C++ to enter any number and print all factors of the number.

#include <iostream>
using namespace std;

int main()
{
    int n;
    int a, b;

    cout << "Input a number: ";
    cin >> n;
    cout << "The factors are: ";

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            a = i;
            cout << a << " ";
        }
    }

    return 0;
}