#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(k > n) cout<<(2*(k - n))<<'\n';
        else cout<<0<<'\n';
    }
    return 0;
}