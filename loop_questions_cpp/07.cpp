// Write a program in C++ to find the factorial of a number.

#include <iostream> 
using namespace std;

int main()
{
    int n;
    int mul=1;

    cout<<"Input a number to find the factorial: ";
    cin>>n;
    cout<<"The factorial of the given number is: ";

    else{
        for (int i = n; i > 0; i--)
    {
        mul=mul*i;
    }
    
    cout<<mul;
    }
    
   
    return 0; 
}