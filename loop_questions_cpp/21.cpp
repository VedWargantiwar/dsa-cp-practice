// Write a C++ program that displays the sum of the n terms of even natural numbers.

#include <iostream>
using namespace std;

int main()
{
    int n;
    int sum = 0;
    cout << "Input number of terms:";
    cin >> n;
    cout << "the even numbers are: ";

    for (int i = 1; i <= n; i++)
    {
        cout << 2 * i << " ";
        sum += 2 * i;
    }

    cout<<'\n';
    cout<<"The sum of even natural numbers upto "<<n<<" terms: "<<sum;

    return 0;
}