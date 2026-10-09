#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin>>n;
    int b;
    int eb;
    cin>>eb>>b;
    n -= 2;
    bool f = 1;
    int c = 2;
    while(n--){
        int d;
        cin>>d;
        c++;
        if(eb < b && b > d && f){
            cout<<"YES\n";
            cout<<c - 2<<' '<<c - 1<<' '<<c<<'\n';
            f = 0;
        }
        eb = b;
        b = d;
    }
    if(f) cout<<"NO\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}