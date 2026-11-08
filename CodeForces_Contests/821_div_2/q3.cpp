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
    cout<<n - 1<<"\n";
    if( n == 1) return;
    cout<<1<<' '<<n<<'\n';
    if((v[0] ^ v[n - 1]) & 1){}
    else v[0] = v[n - 1];
    vi ans;
    for(int i = 1;i < n - 1;i++){
        if((v[0] ^ v[i]) & 1) cout<<1<<' '<<i + 1<<'\n';
        else ans.push_back(i + 1);
    }
    for(auto i : ans) cout<<i<<" "<<n<<'\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1; cin >> T;
    while(T--) solve();
    return 0;
}