#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n,q;
    cin>>n>>q;
    vector<pair<ll,ll>> v(n);
    for(int i = 0; i < n;i++){
        cin>>v[i].first;
        ll d = v[i].first;
        ll c = 0;
        while(d % 2 == 0){
            c++;
            d /= 2;
        }
        v[i].second = c;
    }
    ll mn = 31;
    while(q--){
        ll d;
        cin>>d;
        if(d <= mn){
            for(auto &i : v){
                if(i.second >= d){
                    i.second = d - 1;
                    i.first += 1LL << (d - 1);
                }
            }
            mn = d - 1;
        }
    }
    for(auto i : v){
        cout<<i.first<<' ';
    }
    cout<<'\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1; cin >> T;
    while(T--) solve();
    return 0;
}