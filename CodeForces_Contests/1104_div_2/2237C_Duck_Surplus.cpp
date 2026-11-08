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
    ll ans = v[0];
    for(auto i : v){
        if(ans > i) ans += i;
        else ans = i;
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