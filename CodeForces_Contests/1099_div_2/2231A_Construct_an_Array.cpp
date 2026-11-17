#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n; cin>>n;
    vi v(2 * n + 1,1);
    vi ans;
    ans.push_back(1);
    for(int i = 2; i <= 2 * n;i++){
        if(v[i]){
            int d = i + ans.back();
            if(d <= 2 *n) v[d] = 0;
            ans.push_back(i);
        }
    }
    for(int i = 0; i < n;i++) cout<<ans[i]<<' ';
    cout<<'\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1; cin >> T;
    while(T--) solve();
    return 0;
}