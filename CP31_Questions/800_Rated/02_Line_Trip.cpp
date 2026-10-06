#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n,x;
    cin>>n>>x;
    int mn = 0;
    int back = 0;
    while(n--){
        int d;
        cin>>d;
        mn = max(mn,d - back);
        back = d;
    }
    mn = max(mn,2 * (x - back));
    cout<<mn<<'\n';
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