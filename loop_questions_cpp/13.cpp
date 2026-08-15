// Write a program in C++ to calculate the series (1) + (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n).

#include <iostream>
using namespace std;

int main()
{
    int n;
    int sum;
    int total_sum = 0;

    cout << "Input the value for nth term: ";
    cin >> n;

    int array[n];
    for (int i = 0; i < n; i++)
    {
        array[i] = (i + 1);
    }

    for (int i = 1; i <= n; i++)
    {
        sum = 0;
       

        for (int a = 0; a < i; a++)
        {
            sum += array[a];
        }
         int b = 0;
        for (int a = 0; a < i; a++)
        {
            cout<<array[a];
           
            if ((b<=a) && (b != (i-1)) )
            {
                cout<<"+";
            }
            
            b++;
        
           
            
            
        }
        cout<<" = "<<sum<<'\n';
        total_sum += sum;

    }

    cout<<"The sum of the above series is: "<<total_sum;
    

    return 0;
}