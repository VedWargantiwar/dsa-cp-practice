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
    sort(all(v));
    int c = 0;
    for(int  i = 0;i < n / 2;i++){
        if(v[i] == v[n - i - 1]) break;
        c ++;
    }
    cout<<c<<'\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1; cin >> T;
    while(T--) solve();
    return 0;
}