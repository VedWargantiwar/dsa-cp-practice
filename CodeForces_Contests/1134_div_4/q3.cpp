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
    sort(all(v));
    vi ans(n);
    int a = 0;
    int b = n - 1;
    int backa = -1;
    int backb = -1;
    int c = 0;
    for(int i = 0;i < n;i++){
        if(i & 1){
            ans[b] = v[i];
            if(ans[b] != backb) c++;
            backb = ans[b];
            b--;
        }
        else{
            ans[a] = v[i];
            if(ans[a] != backa) c++;
            backa = ans[a];
            a++;
        }
    }
    cout<<c<<'\n';
    for(auto i : ans) cout<<i<<' ';
    cout<<'\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1; cin >> T;
    while(T--) solve();
    return 0;
}