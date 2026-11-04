#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n,x;
    cin>>n>>x;
    vll v(n);
    for(auto &i : v) cin>>i;
    ll low = 1,high = 2e9,ans = 1;
    while(low <= high){
        ll mid = high - (high - low) / 2;
        ll s = 0;
        for(auto i : v) s += max((ll)0,mid - i);
        if(s <= 1LL * x){
            ans = mid;
            low = mid + 1;
        }
        else high = mid - 1;
    }
    cout<<ans<<'\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1; cin >> T;
    while(T--) solve();
    return 0;
}