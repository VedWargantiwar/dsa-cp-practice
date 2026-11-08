#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n,c; cin>>n>>c;
    vll v(n);
    for(auto &i : v) cin>>i;
    sort(all(v));
    int t = n / 2;
    ll s = 0;
    for(int i = 0;i < t;i++) if(v[i] > c) s += v[i] - c;
    for(int i = t;i < n;i++) s += v[i] - c;
    cout<<s<<'\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1; cin >> T;
    while(T--) solve();
    return 0;
}