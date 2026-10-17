#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    ll n,k,x;
    cin>>n>>k>>x;
    ll mx = (n*(n + 1) - (n - k) * (n - k + 1)) / 2;
    ll mn = k * (k + 1) / 2; 
    cout<<(x <= mx && x >= mn ? "YES\n" : "NO\n");
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