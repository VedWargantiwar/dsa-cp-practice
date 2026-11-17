#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n; cin>>n;
    if(n <= 3){
        cout<<-1<<'\n';
        return;
    }
    vi v(n);
    for(int i = 1; i <= n;i++) v[i - 1] = i;
    v[0] = 4;
    v[3] = 1;
    for(auto i : v) cout<<i<<' ';
    cout<<'\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1; cin >> T;
    while(T--) solve();
    return 0;
}