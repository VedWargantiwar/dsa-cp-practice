#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n,k;
    cin>>n>>k;
    bool check = 1;
    int back = 0;
    while(n--){
        int d;
        cin>>d;
        if(d < back) check = 0;
        back = d;
    }
    if(k > 1) cout<<"YES\n";
    else if(k <= 1 && check) cout<<"YES\n";
    else cout<<"NO\n";
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