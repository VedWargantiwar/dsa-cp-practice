#include <bits/stdc++.h>
using namespace std;
bool fun(int n,int k){
    if(k > n) return 0;
    if(k != n - 1) return 1;
    return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(fun(n,k)) cout<<"Yes"<<'\n';
        else cout<<"No"<<'\n';
    }
    return 0;
}

// better way to write
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
        cout<<(k != n - 1 && k <= n ? "Yes" : "No")<<'\n';
    }
    return 0;
}