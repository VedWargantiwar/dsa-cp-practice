#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    ll n,x;
    cin>>n>>x;
    ll a = INT_MIN;
    ll b = INT_MAX;
    int counter = 0;
    while(n--){
        ll t;
        cin>>t;
        ll c = t - x;
        ll d = t + x;
        if(d < a || c > b){
            a = c;
            b = d;
            counter++;
        }
        else{
            a = max(a,c);
            b = min(b,d);
        }
    }
    cout<<counter<<'\n';
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