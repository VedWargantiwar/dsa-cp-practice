#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n,k; cin>>n>>k;
    vll v(n);
    for(auto &i : v) cin>>i;
    sort(all(v));
    ll mx = 1;
    ll mn = 1;
    ll s = 0;
    for(int i = 0;i < n;i++){
        if(i > 0 && v[i] * i >= s) mx++;
        s += v[i];
    }
    reverse(all(v));
    s = 0;
    for(int i = 0;i < n;i++){
        if(i > 0 && v[i] * i >= s) mn++;
        s += v[i];
    }
    reverse(v.begin(),v.begin() + k);
    if(k > mx || k < mn) cout<<"NO\n";
    else{
        cout<<"YES\n";
        for(auto i : v) cout<<i<<' ';
        cout<<'\n'; 
    } 
}
    
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1; cin >> T;
    while(T--) solve();
    return 0;
}