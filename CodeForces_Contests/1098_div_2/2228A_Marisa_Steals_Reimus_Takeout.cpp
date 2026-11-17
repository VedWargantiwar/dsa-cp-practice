#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n; cin>>n;
    int z =0;
    int a = 0;
    int b = 0;
    while(n--){
        int d; cin>>d;
        if(d == 0) z++;
        else if(d == 1) a++;
        else b++;
    }
    int c = min(a,b);
    a -= c;
    b -= c;
    cout<<z + c + a / 3 + b / 3<<'\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1; cin >> T;
    while(T--) solve();
    return 0;
}