#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    ll n,q;
    cin>>n>>q;
    vll arr(n);
    for(auto &i : arr) cin>>i;
    vll v(n + 2,0);
    while(q--){
        ll a,b;
        cin>>a>>b;
        v[a]++;
        v[b + 1]--;
    }
    vll ans(n);
    ll s = 0;
    for(int i = 1;i <= n;i++){
        s += v[i];
        ans[i - 1] = s;
    }
    sort(all(ans));
    sort(all(arr));
    s = 0;
    for(int i = 0;i < n;i++) s += ans[i] * arr[i];
    cout<<s<<'\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1;
    while(T--) solve();
    return 0;
}