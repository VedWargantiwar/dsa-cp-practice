#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin>>n;
    vi v(n);
    for(int i = 1; i <= n;i++){
        int d;
        cin>>d;
        v[i - 1] = d - i;
    }
    int back = INT_MAX;
    for(int i = 1; i < n;i++){
        if(v[i] != 0 && v[i] < back){
            
        }
    }
    cout<<"YES\n";
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