#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    ll n,k,q;
    cin>>n>>k>>q;
    const ll l = 2e5;
    vll v(l + 1,0);
    while(n--){
        ll a,b;
        cin>>a>>b;
        v[a]++;
        v[b + 1]--;
    }
    vll ans(l + 1);
    ll s = 0;
    ll c = 0;
    for(int i = 0;i < l + 1;i++){
        s += v[i];
        if(s >= k) c++;
        ans[i] = c;
    }
    while(q--){
        ll a,b;
        cin>>a>>b;
        cout<<ans[b] - ans[a - 1]<<'\n';
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1;
    while(T--) solve();
    return 0;
}