#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()
vll v;
int pre = [](){
    ll a = 0;
    ll s = 0;
    const ll n = 1e18;
    for(ll i = 1; s <= n;i += a ){
        s += i;
        v.push_back(s);
        a++;
    }
    return 0;
}();
void solve() {
    ll n;
    cin>>n;
    ll ub = upper_bound(all(v),n) - v.begin();
    cout<<ub - 1<<'\n'; 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}