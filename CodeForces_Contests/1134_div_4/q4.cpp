#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n;cin>>n;
    string s; cin>>s;
    vector<vi> v;
    for(int i = 0;i < n / 2;i++){
        if(s[i] != s[n - i - 1]){
            vi p(2);
            p[0] = s[i] - 'a';
            p[1] = s[n - i - 1] - 'a';
            sort(all(p));
            v.push_back(p);
        }
    }
    sort(all(v));
    vector<vi> ans;
    n = v.size();
    for(auto &i : v){
        if(ans.empty() || ans.back()[1] < i[0]) ans.push_back(i);
        else ans.back()[1] = max(ans.back()[1],i[1]);
    }
    ll c = 0;
    for(auto i : ans) c += 1LL * (i[1] - i[0]);
    cout<<c<<'\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1; cin >> T;
    while(T--) solve();
    return 0;
}