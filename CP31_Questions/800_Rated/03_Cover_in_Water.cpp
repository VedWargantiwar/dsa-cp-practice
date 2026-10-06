#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin>>n;
    int total = 0;
    int con = 0,mxcon = 0;
    while(n--){
        char d;
        cin>>d;
        if(d == '.'){
            total++;
            con++;
        }
        else con = 0;
        mxcon = max(mxcon,con);
    }
    cout<<(mxcon >= 3 ? 2 : total)<<'\n';
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