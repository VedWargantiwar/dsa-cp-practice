#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n; cin>>n;
    vector<string> v(n);
    vi p(n);
    for(auto &i : p) cin>>i;
    for(auto &i : v) cin>>i;
    for(int a = 0;a < 3;a++){
        vector<string> ans(n);
        for(int i = 0;i < n;i++){
            ans[i] = v[p[i] - 1];
        }
        v = ans;
    }
    for(auto i : v) cout<<i<<'\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1; 
    while(T--) solve();
    return 0;
}