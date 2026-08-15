// Write a C++ program to find the most frequent element in an array of integers.

#include <iostream> 
using namespace std;

int main()
{
    int n, mostfrequent, counter1;
    int counter2 = 0;

    cout<<"input the numbers of elements: ";
    cin>>n;
    int array[n];

    cout<<"please enter the elements."<<'\n';
    for (int i = 0; i < n; i++)
    {
       cin>>array[i];
    }

    mostfrequent = array[0];

    for (int i = 0; i < n; i++)
    {
        counter1 = 0;
       for (int a = 0; a < n ; a++)
       {
            if (array[i] == array[a])
            {
               counter1++;
            }
       }
       if (counter1 > counter2)
       {
       counter2 = counter1;
       mostfrequent = array[i];
       }
       
    }

    cout<<"the most frequent is: "<<mostfrequent;
    
    
    return 0;
}