#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n; cin>>n;
    vi v(n);
    for(auto &i : v) cin>>i;
    vi ans;
    vi bo(n,0);
    int mx = 0;
    int k = 0;
    for(int i = 0;i < n;i++){
        if(v[i] < mx){
            ans.push_back(v[i]);
            k = max(k,mx - v[i]);
            bo[i] = 1;
        }
        mx = max(mx,v[i]);
    }
    vi sortedans = ans;
    sort(all(sortedans));
    if(ans != sortedans){
        cout<<"NO\n";
        return;
    }
    for(int i = 0;i < n;i++) if(bo[i]) v[i] += k;
    vi sortedv = v;
    sort(all(v));
    if(v != sortedv){
        cout<<"NO\n";
        return;
    }
    cout<<"YES\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1; cin >> T;
    while(T--) solve();
    return 0;
}