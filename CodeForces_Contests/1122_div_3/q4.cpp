#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    ll n;
    cin>>n;
    set<ll> s;
    for(ll i = 0;i < n;i++){
        ll d;
        cin>>d;
        s.insert(d - i);
    }
    ll mx = 0;
    ll c = 1;
    ll back = -3e8;
    for(auto i : s){
        if(i - back == 1) c++;
        else c = 1;
        back = i;
        mx = max(mx,c);
    }
    cout<<mx<<'\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1; cin >> T;
    while(T--) solve();
    return 0;
}