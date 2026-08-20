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
       for (int a = i; a > 0; a--)
       {
            if(a%2==0) cout<<"0"<<" ";
            else cout<<"1"<<" ";
       }
       cout<<'\n';
    }
    
    return 0;
}