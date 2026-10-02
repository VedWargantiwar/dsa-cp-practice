#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n,m,k;
    cin>>n>>m>>k;
    int c = 1;
    while(m--){
        int d;
        cin>>d;
        while(c < d && k > 0){
            cout<<c<<' ';
            c++;
            k--;
        }
        c = d + 1;
    }
    while(c <= n && k > 0){
        cout<<c++<<' ';
        k--;
    }
    cout<<'\n';
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