#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n; cin>>n;
    int o = 0;
    for(int i = 1;i <= n;i++) o |= i;
    int x = 0;
    x ^= 2;
    for(int i = 2;i < n;i++){
        x ^= i;
    }
    x = max(x ^ (2 * n),x ^ n ^ (n - 1) ^ (2 * n - 2));
    cout<<2 * o<<' '<<x<<'\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1; cin >> T;
    while(T--) solve();
    return 0;
}