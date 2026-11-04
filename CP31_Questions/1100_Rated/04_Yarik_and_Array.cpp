#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin>>n;
    ll ans = INT_MIN;
    ll s = 0;
    int back = -1;
    while(n--){
        ll d;
        cin>>d;
        s += d;
        if((d & 1) == back) s = d;
        ans = max(ans,s);
        back = d & 1;
        if(s < 0) s = 0;
    }
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