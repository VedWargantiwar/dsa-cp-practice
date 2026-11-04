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
    ll s = 0;
    bool f = 0;
    for(int i = 1 ; i < n - 1;i++){
        if(v[i] > 1) f = 1;
        s += v[i];
    }
    ll fs = v[0] + v[n - 1];
    if(fs == 2 && f == 0) cout<<-1<<'\n';
    else if(f == 0) cout<<fs - 1<<'\n';
    else cout<<s + fs - 1<<'\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1; cin >> T;
    while(T--) solve();
    return 0;
}