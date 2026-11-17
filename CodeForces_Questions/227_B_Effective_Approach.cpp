#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n; cin>>n;
    vi v(n + 1);
    for(int i = 0;i < n;i++){
        int d; cin>>d;
        v[d] = i;
    }
    int m; cin>>m;   
    ll a = 0;
    ll b = 0;
    while(m--){
        int d; cin>>d;
        a += 1LL * (v[d] + 1);
        b += 1LL * (n - v[d]);
    }
    cout<<a<<' '<<b;
}

int main() { 
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1; 
    while(T--) solve();
    return 0;
}