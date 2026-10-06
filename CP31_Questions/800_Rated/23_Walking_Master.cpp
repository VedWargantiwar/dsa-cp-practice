#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int high = d - b;
    int left = a + d - b - c;
    if(high < 0 || left < 0) cout<<-1<<'\n';
    else cout<<high + left<<'\n';
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