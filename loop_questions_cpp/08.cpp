// Write a program in C++ to find the last prime number that occurs before the entered number.

#include <iostream>
using namespace std;

int main()
{
    int n;
    int counter;
    cout << "Input a number to find the last prime number occurs before the number: ";
    cin >> n;

    if (n <= 2)
    {
        cout << "please enter a valid number.";
    }
    else
    {
        for (int i = (n-1); i >= 0; i--)
        {

            counter = 0;

            for (int a = 1; a <= i; a++)
            {
                if (i % a == 0)
                {
                    counter++;
                }
            }

            if (counter == 2)
            {
                cout << i << " is the last prime number before " << n;
                break;
            }
        }
    }

    return 0;
}