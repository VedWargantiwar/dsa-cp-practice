#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin>>n;
    int c = 0,a = 0;
    while(n--){
        int d;
        cin>>d;
        if(d > 2) a++;
        if(d > 1) c++;
    }
    if(a > 0 || c > 1) cout<<"YES";
    else cout<<"NO";
    cout<<'\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1; cin >> T;
    while(T--) solve();
    return 0;
}