#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    ll n,m,c;
    cin>>n>>m>>c;
    vll v(n);
    for(auto &i : v) cin>>i;
    vll s(m,0);
    ll sum = 0;
    for(int i = 0;i < m;i++){
        ll d;
        cin>>d;
        s += d ;
        s[i] = s; 
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1; cin >> T;
    while(T--) solve();
    return 0;
}