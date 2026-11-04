#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n,k;
    cin>>n>>k;
    vi v(n);
    for(int i = 0; i < n;i++) cin>>v[i];
    sort(all(v));
    int s = 0;
    for(int i = 0; i < n;i++){
        s += v[i];
        int p = s * (s - 1) / 2;
        if(p > k){
            cout<<i<<'\n';
            return;
        }
    }
    cout<<n<<'\n';
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