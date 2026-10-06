#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin>>n;
    int c = 0;
    while(n--){
        int d;
        cin>>d;
        if(d % 2) c++;
    }
    cout<<(c % 2 ? "NO\n" : "YES\n");
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