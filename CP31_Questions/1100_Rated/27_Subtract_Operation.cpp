#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    ll n,k; cin>>n>>k;
    map<ll,ll> mpp;
    vll v(n);
    for(auto &i : v){
        cin>>i;
        mpp[i]++;
    }
    for(auto i : v){
        ll d = k + i;
        if(mpp.count(d)){
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1; cin >> T;
    while(T--) solve();
    return 0;
}