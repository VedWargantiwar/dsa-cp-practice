#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    string s;
    cin>>s;
    bool a = 0,b = 0;
    for(auto i : s){
        if(i == '1' && a) cout<<1;
        if(i == '0' && b) cout<<0; 
        if(i == '1') a = 1;
        if(i == '0') b = 1;
    }
    cout<<'\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1; cin >> T;
    while(T--) solve();
    return 0;
}