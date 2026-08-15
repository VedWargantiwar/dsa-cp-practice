// Write a program in C++ to find the number and sum of all integers between 100 and 200 which are divisible by 9.

#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    cout << "Numbers between 100 and 200, divisible by 9:";
    cout << '\n';
    for (int i = 101; i < 200; i++)
    {
        if (i % 9 == 0)
        {
            cout << i << " ";
            sum += i;
        }
    }

    cout << '\n';

    cout << "The sum : " << sum;

    return 0;
}