#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n; cin>>n;
    vector<pair<int,int>> v(n);
    vi guess(n);
    int ans = 0;
    for(int i = 0;i < n;i++) cin>>v[i].first>>v[i].second>>guess[i];
    for(int i = 0;i < 3;i++){
        vector<bool> g(3,0);
        g[i] = 1;
        int c = 0;
        for(int i = 0;i < n;i++){
            swap(g[v[i].first - 1],g[v[i].second - 1]);
            if(g[guess[i] - 1]) c++;
        }
        ans = max(ans,c);
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