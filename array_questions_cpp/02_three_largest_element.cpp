// Write a C++ program to find the largest three elements in an array.

#include <iostream>
using namespace std;

int main()
{
    int n, largest, second_largest, third_largest;

    cout << "please enter the number of integers." << '\n';
    cin >> n;
    int array[n];
    cout << "please enter the integers wiht a space." << '\n';

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    largest = array[0];
    second_largest = array[1];
    third_largest = array[2];
    for (int i = 1; i < n; i++)
    {
        if (third_largest < array[i])
        {
             
            third_largest = array[i];
        }

        if (second_largest < array[i])
        {
            third_largest = second_largest;
            second_largest = array[i];
        }

        if (largest < array[i])
        {
            second_largest = largest;
            largest = array[i];
        }
    }

    cout<<"the largest value is: "<<largest<<'\n';
    cout<<"the second_largest value is: "<<second_largest<<'\n';
    cout<<"the third_largest value is: "<<third_largest<<'\n';

    return 0;
}