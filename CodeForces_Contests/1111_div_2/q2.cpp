#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    ll n,k,m; cin>>n>>k>>m;
    if(m < k){
        cout<<"NO\n";
        return;
    }
    cout<<"YES\n";
    ll t = m - k + 1;
    for(int i = 0;i < k - 1;i++) cout<<1<<' ';
    cout<<t<<' ';
    for(int i = k;i < n;i++) cout<<1<<' ';
    cout<<'\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1; cin >> T;
    while(T--) solve();
    return 0;
}