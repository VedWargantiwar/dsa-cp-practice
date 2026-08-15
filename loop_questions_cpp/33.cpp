// Write a program in C++ to check whether a number can be expressed as the sum of two.

#include <iostream>
using namespace std;

int primechecker(int);

int main()
{
    int n;
    int prime1, prime2;

    cout << "Input a positive integer: ";
    cin >> n;

    for (int i = 2; i <= n / 2; i++)
    {
        prime1 = i;
        prime2 = n - i;

        if (primechecker(prime1) && primechecker(prime2))
        {
            cout << n << " = " << prime1 << " + " << prime2 << '\n';
        }
    }

    return 0;
}


int primechecker(int a)
{
    int returnvalue = 1;
    for (int i = 2; i*i <= a; i++)
    {
       if (a % i == 0)
       {
            returnvalue = 0;
            break;
       }
       
    }
    
    return returnvalue;
}

