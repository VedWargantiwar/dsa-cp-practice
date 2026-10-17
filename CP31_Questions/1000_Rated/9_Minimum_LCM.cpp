#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    ll n;
    cin>>n;
    ll x;
    for(ll i = 1; i * i <= n;i++){
        if(n % (1 + i) == 0){
            x = n / (1 + i);
            cout<<x<<' '<<n - x<<'\n';
            return;
        }
    }
    cout<<1<<' '<<n - 1<<'\n';
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