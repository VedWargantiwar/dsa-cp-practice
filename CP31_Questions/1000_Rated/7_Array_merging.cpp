#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin>>n;
    vector<pair<int,int>> v(2 * n + 1,{0,0});
    int back;
    cin>>back;
    int c = 1;
    for(int i = 1; i < n;i++){
        int d;
        cin>>d;
        if(d == back) c++;
        else{
            v[back].first = max(c,v[back].first);
            back = d;
            c = 1;
        }
    }
    v[back].first = max(c,v[back].first);
    cin>>back;
    c = 1;
     for(int i = 1; i < n;i++){
        int d;
        cin>>d;
        if(d == back) c++;
        else{
            v[back].second = max(c,v[back].second);
            back = d;
            c = 1;
        }
    }
    v[back].second = max(c,v[back].second);
    int ans = INT_MIN;
    for(auto i : v) ans = max(i.first + i.second,ans);
    cout<<ans<<'\n';
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