#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    ll n; cin>>n;
    vll v(n);
    for(auto &i : v) cin>>i;
    ll mn = INT_MAX;
    for(auto i : v){
        if(mn < 0){
            cout<<"No\n";
            return;
        }
        if(i < mn) mn = i;
    }
    cout<<"Yes\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1; cin >> T;
    while(T--) solve();
    return 0;
}