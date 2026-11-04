#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin>>n;
    vll v(n);
    for(auto &i : v) cin>>i;
    ll s = 0;
    for(int i = 0; i < n - 2; i++) s += abs(v[i]);
    cout<<v[n - 1] + s - v[n - 2]<<'\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1; cin >> T;
    while(T--) solve();
    return 0;
}