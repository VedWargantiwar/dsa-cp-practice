#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    ll n,k,x;
    cin>>n>>k>>x;
    if(x <= k){
        cout<<"NO\n";
        return;
    }
    ll sum = (n*(n + 1) - (n - k) * (n - k + 1)) / 2;
    cout<<(sum >= x ? "YES\n" : "NO\n");
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