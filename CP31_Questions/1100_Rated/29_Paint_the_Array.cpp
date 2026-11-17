#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n; cin>>n;
    vll v(n);
    for(auto &i : v) cin>>i;
    ll g1 = v[0];
    ll g2 = v[1];
    for(int i = 0;i < n;i++){
        if(i & 1) g2 = gcd(g2,v[i]);
        else g1 = gcd(g1,v[i]);
    }
    bool f1 = 1,f2 = 1;
    for(int i = 0;i < n;i++){
        if(i & 1){
            if(v[i] % g1 == 0) f1 = 0;
        }
        else{
            if(v[i] % g2 == 0) f2 = 0;
        }
    }
    if(f1) cout<<g1;
    else if(f2) cout<<g2;
    else cout<<0;
    cout<<'\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1; cin >> T;
    while(T--) solve();
    return 0;
}