// Write a program in C++ to find the sum of the series [ x - x^3 + x^5 + ......].


#include <iostream> 
using namespace std;

int main()
{
    int x,n;
    int sum = 0;

    cout<<"Input the value of x: ";
    cin>>x;
    cout<<"Input number of terms: ";
    cin>>n;
    cout<<"The values of series: "<<'\n';

    for (int i = 0; i < n; i++)
    {
        int a = 2*i + 1;
        int term = 1;
        int one_power = (-1);

        for (int b = 0; b < a; b++)
        {
            term *= x;
        }

        for (int b = 0; b <= i; b++)
        {
           one_power *= -1;
        }
        
        term *= one_power;
        cout<< term<<'\n';
        sum += term;

        
    }

    cout<<"The sum of the series upto "<<n<<" term is: "<<sum;
    
    return 0;
}