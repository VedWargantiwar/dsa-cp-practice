#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
     ll n;
    cin>>n;
    vll v(n);
    for(auto &i : v) cin>>i;
    sort(all(v));
    ll cost = 0;
    for(ll i = 1;i < n;i++) cost += min(i, (n - i)) * (v[i] - v[i - 1]);
    cout<<cost<<' '<<v[n - 1] - v[0]<<'\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1; cin >> T;
    while(T--) solve();
    return 0;
}