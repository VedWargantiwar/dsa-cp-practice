#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n,m; cin>>n>>m;
    vector<string> spotty(n);
    vector<string> plain(n);
    for(int i = 0;i < n;i++){
        string s; cin>>s;
        spotty[i] = s;
    }
    for(int i = 0;i < n;i++){
        string s; cin>>s;
        plain[i] = s;
    }
    int c = 0;
    for(int i = 0;i < m;i++){
        map<char,int> mpp;
        for(int a = 0; a < n;a++) mpp[plain[a][i]] = 1;
        bool f = 1;
        for(int a = 0; a < n;a++) if(mpp.count(spotty[a][i])) f = 0;
        if(f) c++;
    }
    cout<<c;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1; 
    while(T--) solve();
    return 0;
}