#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    ll n,k;
    cin>>n>>k;
    vector<pair<ll,ll>> v(n);
    for(int i = 0; i < n;i++){
        ll a,b,c;
        cin>>a>>b>>c;
        v[i].first = a + b + c;
        if(a > b || a > c || b > c) v[i].second = 1;
        else v[i].second = 0;
    }
    sort(all(v));
    ll mn = v[0].first;
    bool f = v[0].second;
    for(int i = 0; i  + 1 < n && k > 0 && f;i++){
        k /= i + 1;
        ll d = v[i + 1].first - v[i].first;
        if(k <= d) mn += k;
        else{
            mn += d;
        }
        k -= d;
        f = v[i + 1].second;
    }
    if(k > 0 && f) mn += k;
    cout<<mn<<'\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1; cin >> T;
    while(T--) solve();
    return 0;
}