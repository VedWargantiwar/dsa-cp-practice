#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int c = 0;
    int high = 0;
    while(high < k) if(s[high++] == 'W') c++;
    int ans = c;
    int low = 0;
    while(high < n){
        if(s[high++] == 'W' ) c++;
        if(s[low++] == 'W') c--;
        ans = min(ans,c);
    } 
    cout<<ans<<'\n';
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