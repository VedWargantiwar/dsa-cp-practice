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
    int a = 0;
    for(auto i : s) if(i == '0') c++;
    if(s[0] == '1' || c == 0){
        cout<<c<<'\n';
        return;
    }
    int ans = INT_MAX;
    for(auto i : s){
        if(i == '0') c--;
        else{
            ans = min(ans,a + c);
            a++;
        }
    }
    ans = min(a,ans);
    cout<<ans<<'\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1; cin >> T;
    while(T--) solve();
    return 0;
}