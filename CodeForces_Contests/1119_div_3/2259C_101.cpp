#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin>>n;
    vi v(n);
    int c = 0;
    for(auto &i : v) cin>>i;
    for(auto i : v) if(i != 0) c++;
    bool f = 0;
    for(auto i : v){
        if(i != -1) cout<<i<<' ';
        else{
            c--;
            if(f && c != 0) cout<<'0'<<' ';
            else cout<<'1'<<' ';
            f = 1;
        }
        if(i == 1){
            f = 1;
            c--;
        }
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