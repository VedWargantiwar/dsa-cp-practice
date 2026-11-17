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
    for(int i = 0;i < n;i++){
        int c = 0;
        vi pre(1001,0);
        for(int a = 0; a < n;a++){
            if(i != a){
                pre[v[a].first]++;
                pre[v[a].second]--;
            }
        }
        int s = 0;
        for(auto t : pre){
            s += t;
            if(s > 0) c++;
        }
        ans = max(ans,c);
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