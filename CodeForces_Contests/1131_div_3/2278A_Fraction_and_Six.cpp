#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int a,b;
    cin>>a>>b;
    string as,bs;
    cin>>as>>bs;
    vi v(26,0);
    for(auto i : as) v[i - 'a']++;
    for(auto i : bs) v[i - 'a']--;
    vi ans(26,0);
    ans['s' - 'a'] = 1;
    ans['i' - 'a'] = 1;
    ans['x' - 'a'] = 1;
    cout<<(ans == v ? "YES\n" : "NO\n");
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1; cin >> T;
    while(T--) solve();
    return 0;
}