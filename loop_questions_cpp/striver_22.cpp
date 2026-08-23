#include <iostream> 
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;

    for(int i = n; i > 0;i--){
        int b = n;
        for(int a = 1; a <= 2*n - 1; a++){
            cout<<b;
            if(a < n - i + 1) b--;
            else if(a >= n + i - 1) b++;
        }
        cout<<'\n';
    }
    for(int i = 2; i <= n;i++){
        int b = n;
        for(int a = 1; a <= 2*n - 1; a++){
            cout<<b;
            if(a < n - i + 1) b--;
            else if(a >= n + i - 1) b++;
        }
        cout<<'\n';
    }
    return 0;
}