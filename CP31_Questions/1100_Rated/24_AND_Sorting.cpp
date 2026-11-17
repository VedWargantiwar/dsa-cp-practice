#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n; cin>>n;
    vi v(n,0);
    for(int i = 0;i < n;i++){
        int d; cin>>d;
        if(i != d) v[i] = 1;
    }
    int ans = -1;
    for(int i = 0;i < n;i++) if(v[i]) ans &= i;
    cout<<ans<<'\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1; cin >> T;
    while(T--) solve();
    return 0;
}