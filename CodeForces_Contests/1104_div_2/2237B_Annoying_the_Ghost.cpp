#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n; cin>>n;
    vi v(n);
    for(auto &i : v) cin>>i;
    vi arr(n);
    for(auto &i : arr) cin>>i;
    bool f = 1;
    for(int i = 0;i < n;i++){
        if(v[i] > arr[n - 1])
        for(int a = 0;a < n;a++){
            if(v[i] <= arr[a]){
                v[i] = arr[a];
                break;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1; cin >> T;
    while(T--) solve();
    return 0;
}