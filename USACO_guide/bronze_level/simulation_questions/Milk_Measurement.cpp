#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n; cin>>n;
    vi m(101,0);
    vi e(101,0);
    vi b(101,0);
    while(n--){
        int a; cin>>a;
        string s; cin>>s;
        int c; cin>>c;
        if(s[0] == 'M') m[a] += c;
        else if(s[0] == 'E') e[a] += c;
        else b[a] += c; 
    }
    vector<string> ans(101);
    int mc = 0,bc = 0,ec = 0;
    for(int i = 1;i < 101;i++){
        mc += m[i];
        bc += b[i];
        ec += e[i];
        int t = max({mc,bc,ec});
        string mx = "";
        if(t == mc) mx += "M";
        if(t == bc) mx += "B";
        if(t == ec) mx += "E";
        ans[i] = mx;
    }
    int counter = 0;
    ans[0] = "MBE";
    for(int i = 1;i < 101;i++) if(ans[i] != ans[i - 1]) counter++;
    cout<<counter;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1;  
    while(T--) solve();
    return 0;
}