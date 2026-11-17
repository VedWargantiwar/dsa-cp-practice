#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n; cin>>n;
    vi v(1002,0);
    while(n--){
        int a,b,c; cin>>a>>b>>c;
        v[a] += c;
        v[b + 1] -= c;
    }
    int ans = 0;
    int s = 0;
    for(auto i : v){
        s += i;
        ans = max(ans,s);
    }
    cout<<ans<<'\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1;
    while(T--) solve();
    return 0;
}