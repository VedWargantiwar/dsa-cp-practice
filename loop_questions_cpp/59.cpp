// Write a program in C++ to find the frequency of each digit in a given integer.

#include <iostream>
using namespace std;

int main()
{
    int n;
    int a;
    int array[10] = {0,0,0,0,0,0,0,0,0,0};
    cout << "Input any number: ";
    cin >> n;

    while (n >= 1)
    {
        a = n % 10;
        n /= 10;
        array[a]++;

       
    }

    cout << "The frequency of 0 = " <<array[0] << '\n';
    cout << "The frequency of 1 = " <<array[1] << '\n';
    cout << "The frequency of 2 = " <<array[2] << '\n';
    cout << "The frequency of 3 = " <<array[3] << '\n';
    cout << "The frequency of 4 = " <<array[4] << '\n';
    cout << "The frequency of 5 = " <<array[5] << '\n';
    cout << "The frequency of 6 = " <<array[6] << '\n';
    cout << "The frequency of 7 = " <<array[7] << '\n';
    cout << "The frequency of 8 = " <<array[8] << '\n';
    cout << "The frequency of 9 = " <<array[9] << '\n';

    return 0;
}
