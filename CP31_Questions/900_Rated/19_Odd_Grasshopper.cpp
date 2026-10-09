#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    ll x,n;
    cin>>x>>n;
    if(x & 1){
        if(n % 4 == 0) cout<<x;
        else if(n % 4 == 1) cout<<x + n;
        else if(n % 4 == 2) cout<<x - 1;
        else cout<<x - 1 - n;
    }
    else{
        if(n % 4 == 0) cout<<x;
        else if(n % 4 == 1) cout<<x - n;
        else if(n % 4 == 2) cout<<x + 1;
        else cout<<x + 1 + n;
    }
    cout<<'\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}