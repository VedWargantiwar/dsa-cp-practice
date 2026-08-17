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
        for (int a = 1; a <= i+1; a++)
        {
            cout<<a;
        }
        cout<<'\n';
    }
    
    return 0;
}