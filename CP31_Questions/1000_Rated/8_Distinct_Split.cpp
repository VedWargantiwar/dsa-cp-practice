#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    vi v(26,0);
    vi b(26,0);
    for(auto c : s) v[c - 'a']++;
    int ans = INT_MIN;
    for(auto c : s){
        b[c - 'a']++;
        v[c - 'a']--;
        int e = 0,d = 0;
        for(auto i : b) if(i > 0) e++;
        for(auto i : v) if(i > 0) d++;
        ans = max(ans,e + d);
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