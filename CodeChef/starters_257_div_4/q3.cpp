#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n,k;
    cin>>n>>k;
    vi v(n,0);
    for(auto &i : v) cin>>i;
    int sum = INT_MAX;
    for(int i = 1;i <= n;i++){
        for(int a = i + 1; a <= n;a++){
            if(i <= k + 1 && a > n - k - 1 && a - i <= 2*k + 1) sum = min(v[i - 1] + v[a - 1],sum);
        }
    }
    if(sum != INT_MAX) cout<<sum<<'\n';
    else cout<<-1<<'\n';
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