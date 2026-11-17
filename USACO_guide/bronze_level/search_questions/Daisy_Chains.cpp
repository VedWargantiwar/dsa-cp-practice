#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n; cin>>n;
    vi v(n);
    for(auto &i : v) cin>>i;
    int c = 0;
    for(int i = 0;i < n;i++){
        for(int a = i; a < n;a++){
            int s = 0;
            bool f = 0;
            for(int j = i; j <= a;j++) s += v[j];
            for(int j = i; j <= a;j++) if(v[j] * (a - i + 1) == s) f = 1;
            if(f) c++;
        }
    }
    cout<<c;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1;
    while(T--) solve();
    return 0;
}