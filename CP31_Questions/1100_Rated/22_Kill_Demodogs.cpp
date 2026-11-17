#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    ll n; cin>>n;
    const ll M = 1e9 + 7;
    ll a = (337 * n) % M;
    a *= (n + 1) % M;
    a %= M;
    a *= (4 * n - 1) % M;
    a %= M;
    cout<<a<<'\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1; cin >> T;
    while(T--) solve();
    return 0;
}