#include <iostream> 
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    for(int i = n; i > 0; i-- ){
        int b = 1;
        for(int a = 1 ; a <= 2*n; a++ ){
            if(a > n - i + 1  && a < n + i ) cout<<" ";
            else cout<<b;
            if(a < n) b++;
            else if(a > n) b--;
        }
        cout<<'\n';
    }
    return 0;
}