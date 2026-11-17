#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    ll x,y,m; cin>>x>>y>>m;
    ll ans = -1;
    for(ll a = 0;a <= m / x;a++){
        for(ll b = 0; b <= m / y;b++){
            ll A = a * x + b * y;
            if(A <= m) ans = max(ans,A);
        }
    }
    cout<<ans;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1;       
    while(T--) solve();
    return 0;
}