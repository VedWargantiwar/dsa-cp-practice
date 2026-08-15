// Write a C++ program to find the second smallest elements in a given array of integers.

#include <iostream>
using namespace std;

int main()
{
    int n, smallest, second_smallest;

    cout << "please enter the number of integers." << '\n';
    cin >> n;
    int array[n];
    cout << "please enter the integers wiht a space." << '\n';

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    if (array[0] < array[1])
    {
        smallest = array[0];
        second_smallest = array[1];
    }
    else if (array[1] < array[0])
    {
        smallest = array[1];
        second_smallest = array[0];
    }
    

    for (int i = 2; i < n; i++)
    {
        if ((second_smallest > array[i])&&(smallest < array[i]))
        {
           second_smallest = array[i];
        }
        else if (smallest > array[i])
        {
            second_smallest = smallest;
            smallest = array[i];
        }
        
        
    }

    cout<<"the second smallest value is: "<<second_smallest;

    return 0;
}