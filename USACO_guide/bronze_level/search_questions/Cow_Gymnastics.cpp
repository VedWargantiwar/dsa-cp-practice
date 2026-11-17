#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n,k; cin>>k>>n;
    vector<vi>v(k);
    for(int i = 0;i < k;i++){
        vi t(n);
        for(auto &i : t) cin>>i;
        v[i] = t;
    }
    int c = 0;
    for(int i = 1; i <= n;i++){
        vector<bool> ans(n,1);
        for(int a = 0; a < k;a++){
            for(int j = 0;j < n;j++){
                ans[v[a][j] - 1] = 0;
                if(v[a][j] == i) break;
            }
        }
        for(auto a : ans) if(a) c++;
    }
    cout<<c;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1;
    while(T--) solve();
    return 0;
}