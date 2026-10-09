#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int a,b,c;
    cin>>a>>b>>c;
    if(a + c > 2 * b) cout<<((a + c) % (2 * b) ? "NO\n" : "YES\n");
    else{
        if((2 * b - c) % a == 0 || (2 * b - a) % c == 0) cout<<"YES\n";
        else cout<<"NO\n";
    }
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