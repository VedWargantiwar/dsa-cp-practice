#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    ll a,i,n;
    cin>>a>>i>>n;
    ll c = i;
    while(n--){
        ll d;
        cin>>d;
        c += min(a - 1,d);
    }
    cout<<c<<'\n';
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