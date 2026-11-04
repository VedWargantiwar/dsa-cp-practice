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
    int c = 1;
    for(int i = 1;i < n;i++) if(s[i] != s[i - 1]) c++;
    bool a = 0,b = 0;
    for(int i = 1; i < n - 1;i++){
        if(s[i] != s[i - 1] && s[i - 1] == s[i + 1]) b = 1;
        else if (s[i] != s[i - 1] && s[i] != s[i + 1]) a = 1;
    }
    if(b) cout<<c - 2<<'\n';
    else if (a) cout<<c - 1<<'\n';
    else cout<<c<<'\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1; cin >> T;
    while(T--) solve();
    return 0;
}