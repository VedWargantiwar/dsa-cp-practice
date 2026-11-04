#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    ll n,m,k;
    cin>>n>>m>>k;
    vll v(n);
    for(auto &i : v) cin>>i;
    vector<vll> q(m);
    for(int i = 0;i < m;i++){
        vll d(3);
        cin>>d[0]>>d[1]>>d[2];
        q[i] = d;
    }
    vll d(m + 2,0);
    for(int i = 0;i < k;i++){
        ll a,b;
        cin>>a>>b;
        d[a]++;
        d[b + 1]--;
    }
    ll s = 0;
    for(int i = 1;i < m + 1;i++){
        s += d[i];
        q[i - 1][2] = q[i - 1][2] * s;
    }
    vll diff(n + 2,0);
    for(int i = 0;i < m;i++){
        diff[q[i][0]] += q[i][2];
        diff[q[i][1]+ 1] -= q[i][2];
    }
    s = 0;
    for(int i = 1; i < n + 1;i++){
        s += diff[i];
        v[i - 1] += s;
    }
    for(auto i : v) cout<<i<<' ';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1;
    while(T--) solve();
    return 0;
}