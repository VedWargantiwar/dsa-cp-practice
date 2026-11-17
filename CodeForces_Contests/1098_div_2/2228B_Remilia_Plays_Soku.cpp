#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    ll n,a,b,k; cin>>n>>a>>b>>k;
    if(n == 2){
        cout<<1<<'\n';
        return;
    }
    if(n == 3) k = 0;
    cout<<k + min(abs(a - b),n - abs(a - b))<<'\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1; cin >> T;
    while(T--) solve();
    return 0;
}