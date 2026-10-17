#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n,k;
    cin>>n>>k;
    int count = 0;
    int mx = 0;
    vi v(n,0);
    for(auto &i : v) cin>>i;
    sort(all(v));
    for(int i = 1;i < n;i++){
        if(v[i] - v[i - 1] > k) count = 0;
        else count++;
        mx = max(count,mx);
    }
    cout<<n - mx - 1<<'\n';
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