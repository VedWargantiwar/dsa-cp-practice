#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    ll a,b; cin>>a>>b;
    ll n = b - a;
    ll f = 1;
    ll l = 1e6;
    ll s = 0;
    ll back = 0;
    for(ll i = 1;i < l;i *= 2,f *= -1){
        ll d = f * i;
        if(abs(d) >= abs(n) && d * n > 0){
            s += abs(n - back);
            break;
        }
        s += abs(d - back);
        back = d;
    }
    cout<<s<<'\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1;  
    while(T--) solve();
    return 0;
}