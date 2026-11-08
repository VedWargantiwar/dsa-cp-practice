#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()
vector<int> ans;
int pre = [](){
    const int n = 1e6;
    vector<bool> v(n + 1,true);
    for(int i = 2; i <= n;i++){
        if(v[i]){
            ans.push_back(i);
            for(long long a = (long long)i * i;a <= n;a += i) v[a] = false;
        }
    }
    return 0;
}();
void solve() {
    int n; cin>>n;
    vll v(n);
    for(auto &i : v) cin>>i;
    for(int i = 0;i < n;i++){
        int lb = lower_bound(all(ans),v[i]) - ans.begin();
        v[i] = ans[lb]; 
    }
    for(auto i : v) cout<<i<<' ';
    cout<<'\n';

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1; cin >> T;
    while(T--) solve();
    return 0;
}