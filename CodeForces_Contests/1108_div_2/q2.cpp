#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n; cin>>n;
    if(n == 2) cout<<-1<<'\n';
    else{
        cout<<1<<' ';
        if(n > 2) cout<<2<<' ';
        ll s = 3;
        for(int i = 2;i < n;i++){
            cout<<s<<" ";
            s += s;
        }
        cout<<'\n';
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1; cin >> T;
    while(T--) solve();
    return 0;
}