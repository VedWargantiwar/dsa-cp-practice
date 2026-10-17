#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    ll n,p;
    cin>>n>>p;
    vector<pair<ll,ll>> v;
    for(int i = 0;i < n;i++){
        ll d;
        cin>>d;
        v.push_back({0,d});
    }
    for(int i = 0; i < n;i++){
        ll d;
        cin>>d;
        v[i].first = d;
    }
    sort(all(v));
    ll c = p;
    n--;
    for(auto i : v){
        if(p <= i.first){
            c += n * p;
            n = 0;
        }
        else{
            ll a = min(n,i.second);
            n -= a;
            c += (a)*(i.first);
        }
        if(n == 0){
            cout<<c<<'\n';
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