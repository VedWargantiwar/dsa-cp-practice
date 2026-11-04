#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    vi v = {1,2,3,4,5,6,7,0,8,9};
    vi b = {4,6,3,2,0,8,9,1,7,5};
    int x = 0;
    for(int i = 0; i < 7;i++) x = max(v[i] ^ v[i + 1],x);
    cout<<x<<'\n';
    x = 0;
    for(int i = 0; i < 7;i++) x = max(b[i] ^ b[i + 1],x);
    cout<<x;
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