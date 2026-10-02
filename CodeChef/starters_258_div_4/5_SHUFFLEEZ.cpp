#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    long long n,k;
    cin>>n>>k;
    long long ans = 1;
    for(int i = 1; i <= n;i++){
        int d;
        cin>>d;
        if(i + k <= n) ans = (ans * k ) % 998244353;
        else ans = (long long) ((ans)*(n - i + 1)) % 998244353;
    } 
    ans = (ll)ans % 998244353;
    cout<<ans<<'\n';
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