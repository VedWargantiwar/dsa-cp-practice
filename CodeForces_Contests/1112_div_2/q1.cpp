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
    if(n & 1){
        cout<<"NO\n";
        return;
    }
    int a = INT_MAX,b = INT_MIN;
    for(int i = 0;i < n - 1;i += 2){
        a = min(v[i] - 1,a);
        b = max(v[i + 1] + 1,b);
    }
    if(b <= a) cout<<"YES";
    else cout<<"NO";
    cout<<'\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1; cin >> T;
    while(T--) solve();
    return 0;
}