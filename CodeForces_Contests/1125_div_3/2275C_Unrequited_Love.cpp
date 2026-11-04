#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    ll n;
    cin>>n;
    map<ll,ll> mpp;
    vll v(n);
    vll s;
    for(auto &i : v) cin>>i;
    for(int i = 0;i + 4 < n;i += 2){
        ll su = v[i] + v[i + 2] - v[i + 4];
        mpp[su]++;
        s.push_back(su);
    }
    ll u = 0;
    int si = s.size();
    if(si > 1 && s[0] == s[1]) u++;
    for(int i = 2; i < si;i++){
        if(s[i] == s[i - 1]) u++;
        if(s[i] == s[i - 2]) u++;
    }
    s.clear();
    for(int i = 1;i + 4 < n;i += 2){
        ll su = v[i] + v[i + 2] - v[i + 4];
        mpp[su]++;
        s.push_back(su);
    }
    si = s.size();
    if(si > 1 && s[0] == s[1]) u++;
    for(int i = 2; i < si;i++){
        if(s[i] == s[i - 1]) u++;
        if(s[i] == s[i - 2]) u++;
    }
    ll ans = 0;
    for(auto i : mpp) ans += i.second * (i.second - 1) / 2;
    cout<<ans - u<<'\n';

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1; cin >> T;
    while(T--) solve();
    return 0;
}