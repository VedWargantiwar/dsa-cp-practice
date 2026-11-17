#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    ll n; cin>>n;
    vll a(n);
    vll b(n);
    for(auto &i : a) cin>>i;
    for(auto &i : b) cin>>i;
    sort(a.rbegin(),a.rend());
    sort(b.rbegin(),b.rend());
    ll ans = 1;
    ll MOD = 1e9 + 7;
    ll l = 0;
    for(ll i = 0;i < n;i++){
        while(l < n && a[l] > b[i]) l++;
        ans = (ans * (l - i)) % MOD;
    }
    cout<<ans<<'\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1; cin >> T;
    while(T--) solve();
    return 0;
}