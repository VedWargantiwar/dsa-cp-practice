#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n; cin>>n;
    vi v(1001,0);
    vi m(n);
    for(int i = 0;i < n;i++){
        int d; cin>>d;
        v[d] = i + 1;
        m[i] = d;
    }
    int ans = -1;
    for(int i = 1;i < 1001;i++){
        for(int a = 1;a < 1001;a++) if(v[i] > 0 && v[a] > 0 && gcd(a,i) == 1) ans = max(ans,v[a] + v[i]);
    }
    cout<<ans<<'\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1; cin >> T;
    while(T--) solve();
    return 0;
}