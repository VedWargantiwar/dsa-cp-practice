// Write a program in C++ to find a prime number within a range.

#include <iostream>
using namespace std;

int main()
{
    int sr, er, counter;
    

    cout << "Input number for starting range: ";
    cin >> sr;
    cout << "Input number for ending range: ";
    cin >> er;
    cout << "The prime numbers between "<<sr<<" and "<<er<<" are:" << '\n';

    for (int n = sr; n <= er; n++)
    {
     counter = 0;
    
        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                counter++;
            }
        }

        if (counter == 2)
        {
            cout << n << '\n';
        }
    }

    return 0;
} 