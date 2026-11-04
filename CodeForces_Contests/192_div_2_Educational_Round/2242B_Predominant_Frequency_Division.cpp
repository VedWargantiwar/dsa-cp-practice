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
    for(auto &i : v) cin>>i;
    int low = 0;
    int c = 0;
    while(low < n){
        if(v[low] == 1) c++;
        else c--;
        low++;
        if(c >= 0) break;
    }
    while(low < n && v[low] == 3 && c > 0){
        low++;
        c--;
    }
    bool f = 0;
    c = 0;
    for(int i = low;i < n - 1;i++){
        if(v[i] == 3) c--;
        else c++;
        if(c >= 0){
            f = 1;
            break;
        }
    }
    if(f) cout<<"YES\n";
    else cout<<"NO\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1; cin >> T;
    while(T--) solve();
    return 0;
}