#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin>>n;
    vi deg(n + 1,0);
    for(int i = 0; i < n - 1;i++){
        int u,v;
        cin>>u>>v;
        deg[u]++;
        deg[v]++;
    }
    ll c = 0;
    for(auto i : deg) if(i == 1) c++;
    cout<<(c * (c - 1) * (c - 2) / 6) + (n - 4)<<'\n';
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