#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    ll n; cin>>n;
    vll ans(n);
    ll mn = INT_MAX;
    cin>>mn;
    ans[0] = mn;
    for(int i = 1;i < n;i++){
        ll d; cin>>d;
        if(d < mn) mn = (mn + d) / 2;
        ans[i] = mn;
    }
    for(auto i: ans) cout<<i<<' ';
    cout<<'\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1; cin >> T;
    while(T--) solve();
    return 0;
}