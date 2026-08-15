#include <iostream>
using namespace std;

//  (*b) = 400;
// the above thing doesnt work cause b isnt defined yet.
int main()
{
    // this is a program made to understand the basics of pointers and will only include basic operations.
    
    
    
    // char a = 'f';
    // char *b;
    // char **c;


    int a = 1000;
    int *b;
    int **c;

    b = &a;
    c = &b;

    cout<<"this will output the value of 'a': "<<a<<endl; 
    // cout<<"this will output the value of global 'a': "<<::(*b)<<endl; 
    cout<<"this will output the value of 'a': "<<*b<<endl; 
    cout<<"this will output the value of 'a': "<<**c<<endl<<endl; 

    cout<<"this will output the address of 'a': "<<&a<<endl;
    cout<<"this will output the address of 'a': "<<b<<endl;
    cout<<"this will output the address of 'a': "<<*c<<endl<<endl;

    cout<<"this will output the address of 'b': "<<&b<<endl;
    cout<<"this will output the address of 'b': "<<c<<endl;

    return 0;
}