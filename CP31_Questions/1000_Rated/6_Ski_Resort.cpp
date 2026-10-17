#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n,k,q;
    cin>>n>>k>>q;
    int c = 0;
    ll s = 0;
    while(n--){
        int d;
        cin>>d;
        if(d <= q) c++;
        else{
            s += (k <= c ? (ll) (c - k + 1) * (c - k + 2) / 2 : 0);
            c = 0;
        }
    }
    s += (k <= c ? (ll) (c - k + 1) * (c - k + 2) / 2 : 0);
    cout<<s<<'\n';
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