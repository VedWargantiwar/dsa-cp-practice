#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()
bool fun(ll i){
    ll a = i;
    while(i > 0){
        ll d = i % 10;
        i /= 10;
        if(d > 0 && (a % d != 0)) return 0; 
    }
    return 1;
}
void solve() {
    ll n;
    cin>>n;
    for(ll i = n; i < 1e19;i++){
        if(fun(i)){
            cout<<i<<'\n';
            return;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}