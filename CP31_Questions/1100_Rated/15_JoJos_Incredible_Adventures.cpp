#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    string s; cin>>s;
    ll n = s.size();
    ll c = 0;
    for(auto i : s) if(i == '1') c++;
    if(c == 0) cout<<0<<"\n";
    else if (c == n) cout<<c * c<<'\n';
    else{
        ll c = 0;
        ll mx = 0;
        for(auto i : s){
            if(i == '1') c++;
            else c = 0;
            mx = max(mx,c);
        }
        ll a = 0;
        while(s[a] == '1') a++;
        ll b = n - 1;
        while(s[b] == '1'){
            a++;
            b--;
        }
        mx = max(mx,a);
        cout<<((mx + 1) / 2) * ((mx + 2) / 2)<<'\n';
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1; cin >> T;
    while(T--) solve();
    return 0;
}