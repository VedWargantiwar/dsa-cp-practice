#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    vector<pair<int,int>> v(3);
    for(int i = 0;i < 3;i++) cin>>v[i].first>>v[i].second;
    for(int i = 0;i < 100;i++){
        int a = i % 3;
        int b = (a + 1) % 3;
        int t = min(v[b].first,v[b].second + v[a].second);
        v[a].second = v[b].second + v[a].second - t;
        v[b].second = t;
    }
    for(auto i : v) cout<<i.second<<'\n'; 
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1; 
    while(T--) solve();
    return 0;
}