#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n; cin>>n;
    vi v(n);
    for(auto &i : v) cin>>i;
    int s = 0;
    for(auto i : v) s += i;
    int t = s;
    int ans = INT_MAX;
    for(int i = 0;i < n;i++){
        int c = 0;
        s = t;
        for(int a = 0;a < n;a++){
            s -= v[(i + a) % n];
            c += s;
        }
        ans = min(c,ans);
    }
    cout<<ans<<'\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1;
    while(T--) solve();
    return 0;
}