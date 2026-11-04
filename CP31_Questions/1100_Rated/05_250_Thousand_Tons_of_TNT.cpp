#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin>>n;
    vll m;
    for(int i = 1; i <= n / 2;i++) if(n % i == 0) m.push_back(i);
    vll v(n + 1);
    v[0] = 0;
    for(int i = 0; i < n;i++){
        ll d;
        cin>>d;
        v[i + 1] = v[i] + d;
    }
    ll ans = 0;
    for(ll k : m){
        ll mx = LLONG_MIN;
        ll mn = LLONG_MAX;
        for(int i = 1; i <= n / k;i++){
            mx = max(mx,v[i * k] - v[(i - 1) * k]);
            mn = min(mn,v[i * k] - v[(i - 1) * k]);
        }
        ans = max(ans,mx - mn);
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