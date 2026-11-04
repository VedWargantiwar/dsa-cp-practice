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
    for(auto &i : v) cin>>i;
    int a = 0;
    int b = 0;
    int c = 0;
    for(int i = 0;i < n - 1;i++){
        if(v[i] == v[i + 1]) a++;
        else if(v[i] - v[i + 1] == 1) b = max(b,1);
        else if(v[i] - v[i + 1] == -1 && b > 0) b = 2;
        else if(v[i] - v[i + 1] == -1) c = 1;
    }
    cout<<a + max(c,b)<<'\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1; cin >> T;
    while(T--) solve();
    return 0;
}