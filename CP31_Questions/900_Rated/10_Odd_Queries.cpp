#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    ll n,q;
    cin>>n>>q;
    vll v(n + 1);
    v[0] = 0;
    ll sum = 0;
    for(int i = 0;i < n;i++){
        ll d;
        cin>>d;
        sum += d;
        v[i + 1] = sum;
    }
    while(q--){
        ll l,r,k;
        cin>>l>>r>>k;
        ll ns = (r - l + 1) * k + v[n] -(v[r] - v[l - 1]);
        cout<<(ns & 1 ? "YES\n" : "NO\n");
    }
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