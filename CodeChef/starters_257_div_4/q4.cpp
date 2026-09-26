#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin>>n;
    int sum = 0;
    int mn = INT_MAX;
    int ans = 1;
    int counter = 1;
    while(n--){
        int r;
        cin>>r;
        sum += r;
        if(counter) mn = min(mn,r);
        if(sum < 0){
            counter = 0;
            if(sum - mn < 0) ans = 0;
        }
    }
    if(ans) cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';
    return;
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