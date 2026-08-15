// Write a program in C++ to print a square pattern with the # character.


#include <iostream> 
using namespace std;

int main()
{
    int n;
    cout<<"Input the number of characters for a side: ";
    cin>>n;

    for (int i = 0; i < n; i++)
    {
       for (int i = 0; i < n; i++)
       {
        cout<<"#";
       }
       cout<<'\n';
       
    }
        
    return 0;
}