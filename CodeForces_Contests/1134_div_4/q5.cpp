#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n,k; cin>>n>>k;
    ll s = 0;
    for(int i = 0; i < n;i++){
        ll d; cin>>d;
        s += 1LL * (min(k,i) + 1) * d;
    }
    cout<<(s & 1 ? "Alice" : "Bob")<<'\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1; cin >> T;
    while(T--) solve();
    return 0;
}