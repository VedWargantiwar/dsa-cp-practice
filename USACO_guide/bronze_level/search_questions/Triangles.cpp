#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n; cin>>n;
    vector<pair<int,int>> v(n);
    for(auto &i : v) cin>>i.first>>i.second;
    int ans = 0;
    for(auto i : v){
        for(auto a : v){
            for(auto k : v){
                int x1 = i.first - k.first;
                int y1 = i.second - k.second;
                int x2 = a.first - k.first;
                int y2 = a.second - k.second;
                if(x1 == 0 && y2 == 0) ans = max(ans,abs(y1 * x2));
            }
        }
    }
    cout<<ans;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1;  
    while(T--) solve();
    return 0;
}