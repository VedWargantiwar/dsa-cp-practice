#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n,k;
    cin>>n>>k;
    vi v(n);
    for(auto &i : v) cin>>i;
    sort(v.rbegin(),v.rend());
    int a = min(n - 1,k);
    int sum = 0;
    for(int i = 0; i <= a;i++) sum += v[i];
    cout<<sum<<'\n';
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