#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    ll n,x;
    cin>>n>>x;
    ll s = 0;
    ll b = 0;
    while(n--){
        ll d;
        cin>>d;
        b += (d + x - 1) / x;
        s += d;
    }
    cout<<(s + x - 1) / x<<' '<<b<<'\n';
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