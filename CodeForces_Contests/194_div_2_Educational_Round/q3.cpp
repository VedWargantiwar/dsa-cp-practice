#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin>>n;
    vi v(n);
    for(auto &i : v) cin>>i;
    vi ans;
    for(int i = 0; i < n;i++){
        int mn = INT_MIN;
        vi sm;
        for(int a = i;a < n;a++){
            if(v[a] > mn){
                sm.push_back(v[a]);
                mn = v[a];
            }
        }
        if(sm.size() >ans.size()) ans = sm;
    }
    for(auto i : ans ) cout<<i<<' ';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1;
    while(T--) solve();
    return 0;
}