#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    ll x,y;
    cin>>x>>y;
    ll mx = 0;
    for(int i = 0; i < 2;i++){
        ll k,s,l;
        cin>>k;
        k--;
        cin>>s;
        while(k--) cin>>l;
        mx = max(mx,(l - s) * y);
    }
    for(int i = 0; i < 2;i++){
        ll k,s,l;
        cin>>k;
        k--;
        cin>>s;
        while(k--) cin>>l;
        mx = max(mx, (l - s) * x);
    }
    cout<<mx<<'\n';
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