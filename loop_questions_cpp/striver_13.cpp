#include <iostream> 
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n ;
    int b = 1;
    cin>>n;

    for(int i = 1; i <= n; i++){
        for(int a = 1; a <= i; a++){
            cout<<b<<" ";
            b++;
        }
        cout<<'\n';     
    }
    return 0;
}