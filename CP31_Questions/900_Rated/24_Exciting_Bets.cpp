#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    ll a,b;
    cin>>a>>b;
    ll d = abs(b - a);
    if(d == 0){
        cout<<0<<' '<<0<<'\n';
        return;
    }
    ll n = b % d;
    ll m = min(n,d - n);
    cout<<d<<' '<<m<<'\n';
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