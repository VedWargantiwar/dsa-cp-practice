// Write a program in C++ to display the multiplication table vertically from 1 to n.

#include <iostream> 
using namespace std;

int main()
{
    int coulumn;
    cout<<"Input the number upto: ";
    cin>>coulumn;
    cout<<"Multiplication table from 1 to "<<coulumn<<'\n';

    for (int i = 1; i <= 10; i++)
    {
       for (int a = 1; a <= coulumn; a++)
       {
            cout<<a<<"X"<<i<<"="<<(a*i)<<" ";
       }
       cout<<'\n';
       
    }
    
    return 0;
}