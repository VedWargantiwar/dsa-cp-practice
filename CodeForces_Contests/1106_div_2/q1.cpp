#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n,c; cin>>n>>c;
    vi a(n);
    vi b(n);
    for(auto &i : a) cin>>i;
    for(auto &i : b) cin>>i;
    int ci = 0;
    for(int i = 0;i < n;i++){
        if(b[i] > a[i]){
            ci = INT_MAX;
            break;
        }
        else ci += a[i] - b[i];
    }
    sort(all(a));
    sort(all(b));
    int s = c;
    for(int i = 0;i < n;i++){
        if(b[i] > a[i]){
            s = INT_MAX;
            break;
        }
        else s += a[i] - b[i];
    }
    int ans = min(s,ci);
    if(ans < INT_MAX) cout<<ans<<'\n';
    else cout<<-1<<'\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1; cin >> T;
    while(T--) solve();
    return 0;
}