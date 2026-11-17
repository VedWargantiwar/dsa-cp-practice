#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    string s; cin>>s;
    int sum = 0;
    for(int i = 0;i < 3;i++) sum += s[i] - '0';
    for(int i = 3; i < 6;i++) sum -= s[i] - '0';
    cout<<(sum == 0 ? "YES\n" : "NO\n");
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1; cin >> T;
    while(T--) solve();
    return 0;
}