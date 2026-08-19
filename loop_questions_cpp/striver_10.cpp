#include <iostream> 
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
       for (int a = 1; a <= i; a++)
       {
        cout<<"*";
       }
       cout<<'\n';
       
    }

    for (int i = n -1; i >= 0; i--)
    {
       for (int a = 1; a <= i; a++)
       {
        cout<<"*";
       }
       cout<<'\n';
       
    }
    
    return 0;
}