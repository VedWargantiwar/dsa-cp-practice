#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    ll n;
    cin>>n;
    vector<pair<ll,ll>> v(n);
    vll ans(n);
    for(int i = 0;i < n;i++){
        cin>>v[i].first;
        v[i].second = i;
    }
    sort(all(v));
    v.push_back({v[n - 1].first})
    ll s = 0;
    ll i = 0;
    while(i < n - 1){
        ll c = 1;
        while(i < n - 1 && v[i].first == )
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1; cin >> T;
    while(T--) solve();
    return 0;
}