#include <iostream> 
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        int b = 1;
        for (int a = n; a > i; a--)
        {
            cout<<b;
            b++;
        }
        cout<<'\n';
    }
    
    return 0;
}