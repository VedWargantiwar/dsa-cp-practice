// Write a C++ program to list non-prime numbers from 1 to an upperbound.

#include <iostream> 
using namespace std;

int main()
{
    int n;
    cout<<"Input the upperlimit: ";
    cin>>n;

    cout<<"The non-prime numbers are:"<<'\n';

    for (int i = 4; i <= n; i++)
    {
        int counter = 0;

       for (int a = 2; a < i; a++)
       {
        if (i%a == 0)
        {
            counter++;
        }
        
       }

       if (counter != 0 )
       {
        cout<<i<<" ";
       }
       
       
    }
    

    return 0;
}