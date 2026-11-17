#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    ll n,c; cin>>n>>c;
    vll v(n);
    for(auto &i : v) cin>>i;
    for(int i = 0;i < n;i++) v[i] += i + 1;
    sort(all(v));
    ll count = 0;
    ll s = 0;
    for(auto i : v){
        s += i;
        if(s > c) break;
        count++;
    }
    cout<<count<<'\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1; cin >> T;
    while(T--) solve();
    return 0;
}