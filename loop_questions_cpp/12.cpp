// Write a program in C++ to calculate the sum of the series (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)

#include <iostream>
using namespace std;

int main()
{
    int n;
    int sum = 0;
    cout << "Input the value for nth term: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << i << "*" << i << " = " << (i * i)<<'\n';
        sum += (i * i);
    }
    cout << "the sum of the above series is: " << sum;

    return 0;
}