#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    ll n,l,r; cin>>n>>l>>r;
    vll v(n);
    for(int i = 1; i <= n;i++){
        ll k = ((l + i - 1) / i) * i;
        if(k > r){
            cout<<"NO\n";
            return;
        }
        v[i - 1] = k;
    }
    cout<<"YES\n";
    for(auto &i : v) cout<<i<<" ";
    cout<<"\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1; cin >> T;
    while(T--) solve();
    return 0;
}