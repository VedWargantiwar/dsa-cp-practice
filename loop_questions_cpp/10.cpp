// Write a program in C++ to find the sum of the digits of a given number.

#include <iostream>
using namespace std;

int main()
{
    int n, i;
    int sum = 0;

    cout << "Input a number: ";
    cin >> n;
    int ogn = n;
    if (n >= 0)
    {
        if (n < 10)
        {
            cout << "The sum of digits of " << n << " is: " << n;
        }
        else
        {
            while (n >= 10)
            {
                i = (n % 10);
                sum += i;
                n = (n / 10);
            }
            sum += n;
            cout << "the sum of digits of " << ogn << " is: " << sum;
        }
    }

    else
    {
        cout << "please input a positive value.";
    }
    return 0;
}