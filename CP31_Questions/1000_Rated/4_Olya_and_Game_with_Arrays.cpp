#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin>>n;
    ll sum = 0;
    vector<pair<int,int>> v;
    for(int i = 0; i < n;i++){
        int m;
        cin>>m;
        int s = INT_MAX;
        int ss = INT_MAX;
        for(int a = 0; a < m;a++){
            int d;
            cin>>d;
            if(d <= s){
                ss = s;
                s = d;
            }
            else if(d < ss) ss = d;
        }
        v.push_back({s,ss});
        sum += (ll) ss;
    }
    int s = INT_MAX;
    int sss = INT_MAX;
    for(auto i : v){
        s = min(i.first,s);
        sss = min(sss,i.second);
    }
    sum += (ll) s - sss;
    cout<<sum<<'\n';
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