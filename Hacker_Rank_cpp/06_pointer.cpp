#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a;
    cin >> b;

    int *p = &a;
    int *q = &b;

    *p = (*p + *q);
    
    *q = (*p - *q - *q);

    cout<<*p<<'\n';

    if (*q > 0 )
    {
       cout<<*q;
    }
    else
    {
        cout<<(- *q);
    }
    

    return 0;
}