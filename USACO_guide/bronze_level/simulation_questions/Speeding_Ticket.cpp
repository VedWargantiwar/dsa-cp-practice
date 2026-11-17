#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    vi v(101,0);
    vi arr(101,0);
    int n,m; cin>>n>>m;
    int back = 1;
    while(n--){
        int d,t;
        cin>>d>>t;
        for(int i = back ;i < d + back;i++) v[i] = t;
        back += d;
    }
    back = 1;
    while(m--){
        int d,t;
        cin>>d>>t;
        for(int i = back ;i < d + back;i++) arr[i] = t;
        back += d;
    }
    int mx = 0; 
    for(int i = 0;i < 101;i++) mx = max(mx,arr[i] - v[i]);
    cout<<mx<<'\n';
}      

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1; 
    while(T--) solve();
    return 0;
}