#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    string s,t;
    cin>>s>>t;
    vi v(26,0);
    for(auto i : t) v[i - 'A']++;
    int high = t.size() - 1;
    for(int i = s.size() - 1; i >= 0;i--){
        if(v[s[i] - 'A'] > 0){
            v[s[i] - 'A']--;
            if(s[i] != t[high]){
                cout<<"NO\n";
                return;
            }
            else high--;
        }
    }
    cout<<(high < 0 ? "YES\n" : "NO\n");
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