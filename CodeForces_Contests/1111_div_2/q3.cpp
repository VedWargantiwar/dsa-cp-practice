#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n; cin>>n;
    vi a(n);
    vi b(n);
    for(auto &i : a) cin>>i;
    for(auto &i : b) cin>>i;
    if(a == b){
        cout<<0<<'\n';
        return;
    }
    int c = 0;
    int s = 0;
    int o = 0;
    for(int i = 0;i < n;i++){
        if(a[i] == 1 && b[i] == 0) c++;
        if(a[i] == 0 && b[i] == 0) s++;
        if(a[i] == 1 && b[i] == 1) o++;
    }
    if(c == 0 && s == 0 && o == 0){
        cout<<-1<<'\n';
        return;
    }
    if(c == 0 && s != 0 && o != 0 ){
        cout<<2<<'\n';
        return;
    }
    if(c & 1) cout<<1<<'\n';
    else cout<<2<<'\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1; cin >> T;
    while(T--) solve();
    return 0;
}