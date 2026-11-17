#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    ll n,c;
    cin>>n>>c;
    vll v(n);
    for(auto &i : v) cin>>i;
    ll low = 0,high = 1e9;
    while(low <= high){
        ll mid = high - (high - low) / 2;
        ll s = 0;
        for(int i = 0;i < n;i++){
            s += 1LL * (2 * mid + v[i]) * (2 * mid + v[i]);
            if(s > c) break;
        }
        if(s == c){
            cout<<mid<<"\n";
            return;
        }
        else if(s < c) low = mid + 1;
        else high = mid - 1;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1; cin >> T;
    while(T--) solve();
    return 0;
}