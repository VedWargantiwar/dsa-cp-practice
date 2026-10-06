#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin>>n;
    int ans = 0;
    bool b = 0;
    int d;
    cin>>d;
    b = d & 1;
    n--;
    while(n--){
        cin>>d;
        bool c = d & 1;
        if(c == b) ans++;
        b = c;
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