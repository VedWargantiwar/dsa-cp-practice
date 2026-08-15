// Write a C++ program to find the largest element of a given array of integers.


// this was my first attempt and is a valid solution but is inefficient


#include <iostream>
using namespace std;

int main()
{
    int n, counter, largest;
    
    cout << "please enter the number of integers." << '\n';
    cin >> n;
    int array[n];
    cout << "please enter the integers wiht a space." << '\n';

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    

    for (int i = 0; i < n; i++)
    {

        counter = 0;
        for (int a = 0; a < n; a++)
        {
            if (array[i] < array[a])
            {
                counter++;
            }
        }

        if (counter == 0)
        {
            largest = array[i];
            break;
        }
    }

    cout << "the largest integer is: " << largest;

    return 0;
}