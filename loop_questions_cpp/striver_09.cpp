#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for (int i = 0 ; i <= n; i++)
    {
        for (int a = 1; a <= 2 * n - 1; a++)
        {
            if (a > (n - i) && a < n + i )
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
            
        }
        cout<<'\n';
    }
     for (int i = n  ; i >= 0 ; i--)
    {
        for (int a = 1; a <= 2 * n - 1; a++)
        {
            if (a > (n - i) && a < n + i )
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
            
        }
        cout<<'\n';
    }


    return 0;
}