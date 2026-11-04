#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    ll n;
    cin>>n;
    vll v(n);
    for(auto &i : v) cin>>i;
    for(int i = 0;i < n;i++){
        ll d;
        cin>>d;
        v[i] -= d;
    }
    ll s = 0;
    for(auto i : v){
        if(i < 0) s += abs(i);
        else if(i > 0){
            if(s < i){
                cout<<"NO\n";
                return;
            }
            s -= i;
        }
    }
    cout<<"YES\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1; cin >> T;
    while(T--) solve();
    return 0;
}