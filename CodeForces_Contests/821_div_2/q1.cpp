#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n,k; cin>>n>>k;
    vll v(n);
    for(auto &i : v) cin>>i;
    ll s = 0;
    for(int i = 0; i < k;i++){
        ll mx = 0;
        for(int a = i; a < n;a += k) mx = max(mx,v[a]);
        s += mx;
    }
    cout<<s<<'\n';   
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1; cin >> T;
    while(T--) solve();
    return 0;
}