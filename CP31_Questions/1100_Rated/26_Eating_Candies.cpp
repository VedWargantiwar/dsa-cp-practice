#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    ll n; cin>>n;
    vll v(n);
    for(auto &i : v) cin>>i;
    ll low = 0,high = n - 1;
    ll a = v[0],b = v[n - 1];
    ll ans = 0;
    while(low < high){
        if(b > a) a += v[++low];
        else if(a > b) b += v[--high];
        else{
        ans = low++ + 1 + n - high--;
        a += v[low];
        b += v[high];
        }
    }
    cout<<ans<<'\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1; cin >> T;
    while(T--) solve();
    return 0;
}