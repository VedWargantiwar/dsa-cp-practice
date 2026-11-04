#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin>>n;
    ll s = 0;
    for(int i = 1; i <= n / 2;i++){
        ll d = 1LL * n / i - 1;
        int r = n / i;
        i += r;
        s += d * r;
    }
    cout<<s<<'\n';
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