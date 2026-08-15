// Write a program in C++ to display the cube of the number up to an integer.

#include <iostream> 
using namespace std;

int main()
{
    int n;
    cout<<"input the number of terms: ";
    cin>>n;
    for (int  i = 1; i <= n; i++)
    {
     cout<<"number is: "<<i<<" and the cube of "<<i<<" is: "<<(i*i*i)<<'\n';
    }
    
    return 0;
}