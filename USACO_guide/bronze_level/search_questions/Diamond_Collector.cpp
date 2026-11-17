#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    ll n,k; cin>>n>>k;
    vll v(n);
    for(auto &i : v) cin>>i;
    ll mx = 0;
    for(int i = 0;i < n;i++){
        ll c = 0;
        for(int a = 0; a < n;a++) if(v[a] - v[i] <= k && v[a] >= v[i]) c++;
        mx = max(mx,c);
    }
    cout<<mx;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    freopen("diamond.in", "r", stdin);
    freopen("diamond.out", "w", stdout);
    int T = 1;
    while(T--) solve();
    return 0;
}