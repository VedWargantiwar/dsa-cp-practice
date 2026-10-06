#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin>>n;
    vi v(n,0);
    int c = 0;
    for(int i = 0; i < n;i++){
        cin>>v[i];
        if(v[i] == 2) c++;
    }
    int cc = 0;
    int i = 0;
    while(i < n){
        if(v[i] == 2) cc++;
        if(cc == c - cc) break;
        i++;
    }
    cout<<(i >= n ? -1 : i + 1)<<'\n';  
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