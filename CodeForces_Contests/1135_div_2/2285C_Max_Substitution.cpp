#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    ll n; cin>>n;
    vll v(n + 1,0);
    ll s = 0;
    ll c = 0;
    for(ll i = 0;i < n;i++){
        ll d; cin>>d;
        s += v[i];
        d += s;
        ll x = min(d,n - i - 1);
        c += x;
        v[i + 1]++;
        v[i + x + 1]--;
    }
    cout<<c<<"\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1; cin >> T;
    while(T--) solve();
    return 0;
}