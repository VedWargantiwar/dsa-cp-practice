#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int c = 0;
    int ans = 0;
    int d = 0;
    bool f = 0;
    for(auto i : s){
        if(i == '1' && c == 0) f = 1;
        if (f) d++;
        if(i == '1') c++;
        if(d > k && c > 0){
            f = 0;
            d = 0;
            c = 0;
            ans++;
        }
    }
    if(c) ans++;
    cout<<ans<<'\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1; cin >> T;
    while(T--) solve();
    return 0;
}