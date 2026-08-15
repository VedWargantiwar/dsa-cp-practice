// Write a program in C++ to find the Greatest Common Divisor (GCD) of two numbers.

#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout << "Input the first number: ";
    cin >> num1;
    cout << "Input the second number: ";
    cin >> num2;

    if (num1 > num2)
    {
        for (int i = (num2); i >= 1; i--)
        {
            if (num2 % i == 0)
            {
                if (num1 % i == 0)
                {
                    cout << "The Greatest Common Divisor is: " << i;
                    break;
                }
            }
        }
    }
    else
    {
        for (int i = (num1); i >= 1; i--)
        {
            if (num1 % i == 0)
            {
                if (num2 % i == 0)
                {
                    cout << "The Greatest Common Divisor is: " << i;
                    break;
                }
            }
        }
    }

    return 0;
}