#include <iostream>
using namespace std;

void myswap(int &p, int &q)
{
    int temp = p;
    p = q;
    q = temp;
}


int main()
{
    int a, b;
    cin >> a >> b;
    cout << "The value of a is " << a << ", and the value of b is " << b << '\n';
    
    myswap(a,b);
    cout << "The value of a is " << a << ", and the value of b is " << b << '\n';
    
    

    return 0;
}