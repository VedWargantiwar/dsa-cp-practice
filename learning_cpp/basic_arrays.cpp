#include <iostream>
using namespace std;

int main()
{
    // this is my first attempt at making a array
    // i will try to make it using a loop.

    double salary[10];
    int a, b;
    for (int i = 0; i < 10; i++)
    {
        a = 2 * i;                                    // this is just a arbitary realtion.
        salary[i] = 1000 * a + 5 * a - a * a + 10025; // again this is just an arbitary realtion.
    }

    // now i am going to output the array using a while loop
    b = 0;
    while (b < 10)
    {
        cout << "the salary of employee no. " << (b + 1) << " is: " << salary[b] << '\n';
        b++;
    }

    // this will be a attempt with pointers.
    b = 0;
    double* p = salary;

    while (b < 10)
    {
        cout << "the address of the " << b << "th block of the array is: " << (p + b) << '\n';
        b++;
    }
    b = 0;
    while (b < 10)
    {
        cout << "the salary of employee no. " << (b + 1) << " is: " << *(p + b) << '\n';
        b++;
    }

    return 0;
}