#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int x,y,z;
    cin>>x>>y>>z;
    int t = x + y + z;
    int w = max({x,y,z});
    if(w == x) while(t--) cout<<"P";
    else if(w == y) while(t--) cout<<"R";
    else while(t--) cout<<"S";
    cout<<'\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1; cin >> T;
    while(T--) solve();
    return 0;
}