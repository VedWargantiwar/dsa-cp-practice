// Write a C++ program to find the sum of an A.P. series.

#include <iostream> 
using namespace std;

int main()
{
    int start, n, d;
    int sum = 0;

    cout<<"Input the starting number of the A.P. series: ";
    cin>>start;
    cout<<"Input the number of items for the A.P. series: ";
    cin>>n;
    cout<<"Input the common difference of A.P. series: ";
    cin>>d;
    cout<<"The Sum of the A.P. series are: ";
    cout<<'\n';
    
    for (int i = 0; i < n; i++)
    {
        int a = start + i*d;
        cout<<a;
        if (i != n-1)
        {
           cout<<" + ";
        }
        
        sum += a;
        
    }
    cout<<" = "<<sum;
    
    return 0;
}