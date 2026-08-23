#include <iostream> 
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    for(int i = 1; i < n; i ++){
        for(int a = 0; a < i; a++){
            cout<<char('A' + n - i + a)<<" ";
        }
        cout<<'\n';
    }
    return 0;
}