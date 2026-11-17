#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n; cin>>n;
    vi a(n);
    vi b(n);
    for(auto &i : a) cin>>i;
    for(auto &i : b) cin>>i;
    int l = 0; int h = n - 1;
    while(l < n && a[l] == b[l]) l++;
    while(h >= 0 && a[h] == b[h]) h--;
    while(h < n && b[h] >= b[h - 1]) h++;
    while(l >= 0 && b[l] <= b[l + 1]) l--;
    cout<<l + 2<<' '<<h<<'\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1; cin >> T;
    while(T--) solve();
    return 0;
}