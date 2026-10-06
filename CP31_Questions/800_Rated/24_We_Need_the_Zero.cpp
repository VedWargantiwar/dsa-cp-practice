#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin>>n;
    int b = 0;
    int temp = n;
    while(temp--){
        int d;
        cin>>d;
        b ^= d;
    }
    if(n % 2) cout<<b<<'\n';
    else cout<<(b ? -1 : 0)<<'\n';
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