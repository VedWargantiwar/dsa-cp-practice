#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    ll a,b,n;
    cin>>a>>b>>n;
    ll s = b - 1;
    while(n--){
        ll d;
        cin>>d;
        s += min(a,d);
    } 
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