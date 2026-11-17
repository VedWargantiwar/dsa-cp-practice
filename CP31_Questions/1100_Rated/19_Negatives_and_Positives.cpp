#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    ll n; cin>>n;
    vll v(n);
    for(auto &i : v ) cin>>i;
    ll f = 1;
    for(auto i : v) if(i < 0) f *= -1;
    for(auto &i : v) i = abs(i);
    sort(all(v));
    ll s = 0;
    for(int i = 1; i < n;i++) s += v[i];
    s += (f == 1 ? v[0] : -v[0]);
    cout<<s<<'\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1; cin >> T;
    while(T--) solve();
    return 0;
}