// Write a C++ program that displays the sum of n odd natural numbers.

#include <iostream>
using namespace std;

int main()
{
    int n;
    int sum = 0;

    cout << "Input number of terms: ";
    cin >> n;
    cout << "The odd numbers are: ";
    for (int i = 0; i < n; (i++))
    {
        cout<<2*i+1<<" ";
        sum += 2*i+1;
    }
    cout<<'\n';
    cout<<"The Sum of odd Natural Numbers upto "<<n<<" terms: "<<sum;
    return 0;
}
