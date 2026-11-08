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
    int c = 0;
    int mx = INT_MIN;
    for(int i = 0;i < n;i++){
        c = 0;
        for(int a = 0;a < n;a++) if(v[a] % v[i] == 0) c++;
        mx = max(mx,c);
    }
    cout<<n - mx<<'\n';   
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1; cin >> T;
    while(T--) solve();
    return 0;
}