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
    for(int i = 0; i < n;i++){
        cin>>v[i].first;
        v[i].second = i;
    }
    sort(v.rbegin(),v.rend());
    ll s = 0;
    ll a = 1;
    for(int i = 0; i < n;i += 2){
        ll temp = v[i].first;
        v[i].first = v[i].second;
        s += temp * a;
        v[i].second = a++; 
    }
    a = -1;
    for(int i = 1; i < n;i += 2){
        ll temp = v[i].first;
        v[i].first = v[i].second;
        s += temp * (-a);
        v[i].second = a--; 
    }
    sort(all(v));
    cout<<2 * s<<'\n'<<0<<' ';
    for(auto i : v) cout<<i.second<<' ';
    cout<<'\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}