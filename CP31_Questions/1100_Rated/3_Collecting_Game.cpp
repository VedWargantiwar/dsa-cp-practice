#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin>>n;
    vector<pair<int,int>> v(n);
    for(int i = 0; i < n;i++){
        cin>>v[i].first;
        v[i].second = i;
    }
    sort(all(v));
    vll ps(n + 1);
    ll s = 0;
    for(int i = 0; i <= n;i++){
        ps[i] = s;
        s += v[i];
    }
    vi ans(n);
    for(int i = 1; i <= n;i++){
        int ub = upper_bound(v,ps[i]) - v.begin();
        ans[v[i - 1].second] = ub - 2;
    }
    for(auto i : ans) cout<<i<<' ';
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