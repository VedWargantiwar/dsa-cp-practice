#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    ll n,c;
    cin>>n>>c;
    vll v(n);
    for(auto &i : v) cin>>i;
    ll ans = 0;
    ll low = 1,high = 1e18;
    while(low <= high){
        ll mid = high - (high - low) / 2;
        ll s = c;
        for(auto i : v) s -= (i + 2 * mid) * (i + 2 * mid);
        if(s <= 0){
            ans = mid;
            low = mid + 1;
        }
        else high = mid - 1;
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