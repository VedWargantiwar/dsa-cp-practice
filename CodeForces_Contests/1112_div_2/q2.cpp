#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    ll n,k; cin>>n>>k;
    string s = "";
    if(k == n - 1){
        cout<<-1<<'\n';
        return;
    }
    int a = k / 2;
    int b = k - a;
    string ans = "";
    for(int i = 0;i < a + 1;i++) ans += '1';
    s += ans;
    ans = "";
    for(int i = 0;i < b + 1;i++) ans += '0';
    s += ans;
    int l = n - a - b - 2;
    ans = "";
    for(int i = 0;i < l;i++){
        if(i & 1) ans += '0';
        else ans += '1';
    }
    s += ans;
    cout<<s<<'\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1; cin >> T;
    while(T--) solve();
    return 0;
}