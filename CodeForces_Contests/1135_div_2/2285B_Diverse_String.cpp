#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    ll n,k; cin>>n>>k;
    string s; cin>>s;
    ll a = 0;
    for(auto c : s) if(c == '1') a++;
    a = max(a,n - a);
    ll ans = -1;
    ll limit = min(n,a + k);
    for(ll i = a;i <= limit;i++){
        ll d = 1 + ((i)*(i + 1) + (n - i)*(n - i + 1))/ 2;
        ans = max(ans,d);
    }
    cout<<ans<<'\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1; cin >> T;
    while(T--) solve();
    return 0;
}