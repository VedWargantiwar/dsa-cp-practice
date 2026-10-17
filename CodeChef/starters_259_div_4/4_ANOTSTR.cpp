#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin>>n;
    string a , b;
    cin>>a>>b;
    int c = 0;
    int d = 0;
    for(int i = 0; i < n;i++){
        if(a[i] == '1') c++;
        if(b[i] == '1') d++;
    }
    cout<<((c - d) & 1 ? "NO\n" : "YES\n");
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