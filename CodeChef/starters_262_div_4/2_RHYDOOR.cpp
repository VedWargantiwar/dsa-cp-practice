#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    string s;
    cin>>n>>s;
    int c = 0;
    int ans = 0;
    for(int i = 1; i < n;i++){
        if(s[i] == s[i - 1]) c++;
        else c = 0;
        if(c > 1){
            c = 0;
            ans++;
            i++;
        }
    }
    cout<<ans<<'\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1; cin >> T;
    while(T--) solve();
    return 0;
}