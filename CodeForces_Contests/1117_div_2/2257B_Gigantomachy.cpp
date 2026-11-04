#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    ll n,m; cin>>n>>m;
    vll v(n);
    for(auto &i : v) cin>>i;
    v.push_back(-1);
    ll s = 0;
    for(int i = 0;i < n;i++) s += v[i] + 1 - v[i + 1];
    vll arr(m);
    for(auto &i : arr) cin>>i;
    arr.push_back(-1);
    for(int i = 0;i < m;i++) s -= arr[i] + 1 - arr[i + 1]; 
    cout<<(s >= 0 ? 1 : 2)<<'\n';  
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1; cin >> T;
    while(T--) solve();
    return 0;
}