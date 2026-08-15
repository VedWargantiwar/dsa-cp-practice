// Write a program in C++ to display the sum of the series [ 9 + 99 + 999 + 9999 ...].
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
        a = a*10 + 9;
        cout<<a<<" ";
        sum += a;

       
    }

    cout<<'\n'<<"The sum of the series is =  "<<sum;
    
    return 0;
}