// Write a program in C++ to display the numbers in reverse order.

#include <iostream>
using namespace std;

int main()
{
    int n, a;
    int newn = 0;
    cout << "input a number: ";
    cin >> n;

    while (n >= 1)
    {
        a = n % 10;
        n = n / 10;
        newn = newn * 10 + a;
    }

    

    cout << "the number in reverse order is: " << newn;
    return 0;
}