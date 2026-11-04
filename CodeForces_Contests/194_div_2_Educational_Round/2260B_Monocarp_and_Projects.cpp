#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    ll a,b,c;
    cin>>a>>b>>c;
    ll s = 0;
    for(int i = 0; i < c;i++){
        s += (b + i) % (a + i);
        cout<<s<<' ';
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