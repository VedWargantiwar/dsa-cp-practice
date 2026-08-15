// Write a program in C++ to display n terms of natural numbers and their sum.

#include <iostream>
using namespace std;

int main()
{
    int n;
    int a = 0;

    cout << "Input a number of terms: ";
    cin >> n;

    cout << "The natural numbers upto " << n << "th terms are: " << '\n';

    for (int i = 1; i <= n; i++)
    {

        cout << i << " ";
        a = a + i;
    }

    cout <<'\n' << "the sum of the natural numbers is: " << a;

    return 0;
}