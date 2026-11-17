#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    ll n,k; cin>>n>>k;
    vll v(n);
    for(auto &i : v) cin>>i;
    sort(all(v));
    int h = n - 2; int l = 2;
    ll sb = v[n - 1]; ll sm = v[0] + v[1];
    while(k > 0){
        if(sb < sm) sb = v[h--];
        else {
            if(l + 2 < n) sm = v[l++] + v[l++];
        }
        k--;
    }
    ll s = 0;
    for(int i = l; i <= h;i++) s += v[i];
    cout<<s<<'\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1; cin >> T;
    while(T--) solve();
    return 0;
}