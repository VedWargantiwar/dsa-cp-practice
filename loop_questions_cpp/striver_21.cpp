#include <iostream> 
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    for(int i = 0; i < n ; i++){
        for(int a = 0; a < n ;a++){
            if( i == 0 || i == n - 1 || a == 0 || a == n - 1) cout<<'*';
            else cout<<" ";
        }
        cout<<'\n';
    }
    return 0;
}