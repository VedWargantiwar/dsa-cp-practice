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
    for(int i = 0;i < n / k;i++){
        bool f = 1;
        for(int a = i * k; a < (i + 1)*k;a++) if(s[a] == '0') f = 0;
        if(f) c++;
    }
    cout<<c<<'\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1; cin >> T;
    while(T--) solve();
    return 0;
}