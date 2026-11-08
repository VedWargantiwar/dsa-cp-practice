#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n,a,b; cin>>n>>a>>b;
    int t = max(a,b);
    if(a * b == 0 && a + b != 0 && (n - 1) % t == 0){
        int ans = 1;
        while(ans <= n){
            for(int i = 0;i < t;i++) cout<<ans<<' ';
            if(ans == 1) ans += t + 1;
            else ans += t;
        }
        cout<<'\n';
    }
    else cout<<-1<<'\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1; cin >> T;
    while(T--) solve();
    return 0;
}