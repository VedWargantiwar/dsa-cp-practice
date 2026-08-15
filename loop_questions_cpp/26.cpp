// Write a program in C++ to find the sum of the series 1 +11 + 111 + 1111 + .. n terms.

#include <iostream> 
using namespace std;

int main()
{
    int n;
    int a = 0;
    int sum = 0;
    cout<<"Input number of terms: ";
    cin>>n;
    
    for (int i = 1; i <= n; i++)
    {
        a = a*10 + 1;
        cout<<a<<" ";
        if (i != n)
        {
           cout<<" + ";
        }
        
        sum += a;

       
    }

    cout<<'\n'<<"The sum of the series is =  "<<sum;
    
    return 0;
}