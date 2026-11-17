#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n; cin>>n;
    vector<vector<string>> v(n);
    vector<string> main(n);
    for(int i = 0;i < n;i++){
        cin>>main[i];
        int d; cin>>d;
        vector<string> temp(d);
        for(auto &a : temp) cin>>a;
        v[i] = temp;
    }
    int ans = 0;
    for(int i = 0;i < n;i++){
        for(int a = 0; a < n;a++){
            if(i == a) continue;
            int com = 0;
            for(int j = 0 ; j < v[i].size();j++){
                for(int k = 0; k < v[a].size();k++) if(v[i][j] == v[a][k]) com++;
            }
            ans = max(ans,com + 1);
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