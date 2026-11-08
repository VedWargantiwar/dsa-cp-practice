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
    if(n & 1){
        cout<<"NO\n";
        return;
    }
    int m = 1;
    for(auto i : v) m  *= i;
    n /= 2;
    if((n & 1) && m == -1) cout<<"YES\n";
    else if(!(n & 1) && m == 1) cout<<"YES\n";
    else cout<<"NO\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1; cin >> T;
    while(T--) solve();
    return 0;
}