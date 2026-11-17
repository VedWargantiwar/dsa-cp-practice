#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    ll n; cin>>n;
    vll x(n);
    vll y(n);
    for(auto &i : x) cin>>i;
    for(auto &i : y) cin>>i;
    ll ans = 0;
    for(int i = 0;i < n;i++){
        for(int a = 0;a < n;a++){
            ll d = abs(x[i] - x[a])*abs(x[i] - x[a]) + abs(y[i] - y[a])*abs(y[i] - y[a]);
            ans = max(ans,d);
        }
    }
    cout<<ans ;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1; 
    while(T--) solve();
    return 0;
}