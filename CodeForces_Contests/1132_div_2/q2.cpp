#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n; cin>>n;
    vll v(n);
    for(auto &i : v) cin>>i;
    sort(v.rbegin(),v.rend());
    ll a = 0;
    ll b = 0;
    for(int i = 0;i < n;i++){
        if(a < b) a += 1LL << v[i];
        else b += 1LL <<v[i];
    }
    cout<<a * b<<'\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1; cin >> T;
    while(T--) solve();
    return 0;
}