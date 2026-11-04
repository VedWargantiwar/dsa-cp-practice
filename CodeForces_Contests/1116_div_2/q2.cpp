#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n; cin>>n;
    string s; cin>>s;
    int c = 0; int b = 0;
    bool f = 1;
    for(int i = 0;i < n;i += 2) if(s[i] != '?') c++;
    for(int i = 1;i < n;i += 2) if(s[i] != '?') b++;
    
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1; cin >> T;
    while(T--) solve();
    return 0;
}