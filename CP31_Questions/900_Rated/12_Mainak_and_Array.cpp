#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin>>n;
    vi v(n);
    for(auto &i : v) cin>>i;
    int mx = 0;
    for(int i = 1; i < n;i++) mx = max(mx,v[i] - v[0]);
    for(int i = 0; i < n - 1;i++){ 
        mx = max(mx,v[n - 1] - v[i]);   
        mx = max(mx,v[i] - v[i + 1]);
    }
    cout<<mx<<'\n';
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