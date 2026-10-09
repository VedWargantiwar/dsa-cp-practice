#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    ll n;
    cin>>n;
    if(n & 1 || n == 2){
        cout<<-1<<'\n';
        return;
    }
    if(n % 6 == 0) cout<<(n / 6);
    else cout<<(n / 6 + 1);
    cout<<' '<<(n / 4)<<'\n';
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