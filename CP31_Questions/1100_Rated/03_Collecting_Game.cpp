#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    ll n; cin>>n;
    vector<pair<ll,ll>> v(n);
    for(int i = 0;i < n;i++){
        ll d; cin>>d;
        v[i].first = d;
        v[i].second = i;
    }
    sort(all(v));
    vll ans(n);
    ans[v[n - 1].second] = n - 1;
    vll pre(n);
    ll s  = 0;
    for(int i = 0;i < n;i++){
        s += v[i].first;
        pre[i] = s;
    }
    for(int i = n - 2;i >= 0;i--){
        if(pre[i] >= v[i + 1].first) ans[v[i].second] = ans[v[i + 1].second];
        else ans[v[i].second] = i; 
    }
    for(auto i : ans) cout<<i<<' ';
    cout<<'\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1; cin >> T;
    while(T--) solve();
    return 0;
}