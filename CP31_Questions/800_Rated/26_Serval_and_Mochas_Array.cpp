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
    for(int i = 0; i < n;i++) cin>>v[i];
    for(int i = 0; i < n;i++){
        for(int a = i + 1; a < n;a++){
            int gd = gcd(v[i],v[a]);
            if(gd <= 2){
                cout<<"Yes\n";
                return;
            }
        }
    }
    cout<<"No\n";    
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