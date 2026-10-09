#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin>>n;
    vll v(n);
    for(auto &i : v) cin>>i;
    int c = 0;
    for(int i = n - 1; i >= 1;i--){
        if(v[i] == 0){
            cout<<-1<<'\n';
            return;
        }
        while(v[i] <= v[i - 1]){
            c++;
            v[i - 1] /= (long long)2;
        }
    }
    cout<<c<<'\n';
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