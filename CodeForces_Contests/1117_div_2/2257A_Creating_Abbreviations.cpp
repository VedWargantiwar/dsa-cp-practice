#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n,m; cin>>n>>m;
    vector<string> v(n);
    for(auto &i : v) cin>>i;
    vi hash(26,0);
    for(auto i : v) hash[i[0] - 'a']++;
    bool f = 1;
    while(m--){
        string s;
        cin>>s;
        for(auto i : s) if(hash[i - 'A'] < 1) f = 0;
    }
    cout<<(f ? "YES\n" : "NO\n"); 
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1; cin >> T;
    while(T--) solve();
    return 0;
}