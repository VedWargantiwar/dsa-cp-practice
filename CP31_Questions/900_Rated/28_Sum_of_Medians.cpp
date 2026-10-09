#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n,k;
    cin>>n>>k;
    int m = n * k;
    vll v(m);
    for(auto &i : v) cin>>i;
    int d = n / 2 + 1;
    ll sum = 0;
    int high = m - d;
    while(k--){
        sum += v[high];
        high -= d;
    }
    cout<<sum<<'\n'; 
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