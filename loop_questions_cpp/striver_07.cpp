#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int a = 1; a <= 2 * n - 1; a++)
        {
            if (i >= a-4 && i < a - 3 )
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