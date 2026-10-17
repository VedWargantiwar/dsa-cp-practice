#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n,k;
    cin>>n>>k;
    vector<pair<int,int>> v(n);
    for(int i = 1; i <= n;i++){
        int d;
        cin>>d;
        v[i - 1] = {(k - d % k) % k,i};
    }
    sort(all(v));
    for(auto i : v) cout<<i.second<<' ';
    cout<<'\n';
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