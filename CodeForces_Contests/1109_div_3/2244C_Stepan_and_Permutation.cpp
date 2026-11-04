#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n,a,b;
    cin>>n>>a>>b;
    vi v(n);
    for(int i = 1; i < n + 1;i++){
        int d;
        cin>>d;
        v[i - 1] = d - i;
    }
    bool f = 1;
    for(auto i : v){
        if(abs(i) % gcd(b,a) == 0){}
        else f = 0;
    }
    cout<<(f ? "YES\n" : "NO\n");
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1; cin >> T;
    while(T--) solve();
    return 0;
}