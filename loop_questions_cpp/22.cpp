// Write a program in C++ to display the n terms of a harmonic series and their sum.

#include <iostream>
using namespace std;

int main()
{
    int n;
    double sum = 0;
    cout << "input the number of terms: ";
    cin >> n;

    for (double i = 1; i <= n; i++)
    {
        cout << "1/" << i;
        if (i != n)
        {
            cout << " + ";
        }
        
        sum += double(1/i);
    }

    cout<<'\n';
    cout<<"the sum of the series upto "<<n<<" terms: "<<sum;

    return 0;
}