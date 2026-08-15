// this is my attempt at making a one pass algorithm.

#include <iostream>
using namespace std;

int main()
{
    int n, largest, second_largest;

    cout << "please enter the number of integers." << '\n';
    cin >> n;
    int array[n];
    cout << "please enter the integers wiht a space." << '\n';

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    if (array[1] > array[0])
    {
        largest = array[1];
        second_largest = array[0];
    }
    else
    {
        largest = array[0];
        second_largest = array[1];
    }


    for (int i = 1; i < n; i++)
    {
        if ((second_largest < array[i]) && !(largest <= array[i]))
        {
            second_largest = array[i];
        }

        if (largest < array[i])
        {
            second_largest = largest;
            largest = array[i];
        }
    }

    cout << "The second largest value is: " << second_largest;

    return 0;
}