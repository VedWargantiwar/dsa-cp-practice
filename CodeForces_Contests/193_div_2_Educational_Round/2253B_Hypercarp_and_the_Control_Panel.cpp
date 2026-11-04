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
    int c = 1;
    for(int i = 0;i < n - 1;i++) if(v[i] != v[i + 1]) c++;
    int f = 0;
    for(int i = 1;i < n - 2;i++){
        if(v[i] == v[i - 1] && v[i] != v[i + 1] && v[i] != v[i + 2] && v[i + 1] == v[i + 2]) f = 2;
        else if(v[i] == v[i - 1] && v[i] != v[i + 1] && v[i] != v[i + 2]) f = max(f,1);
    }
    for(int i = n - 2;i > 1;i--){
        if(v[i] == v[i + 1] && v[i] != v[i - 1] && v[i] != v[i - 2] && v[i - 1] == v[i - 2]) f = 2;
        else if(v[i] == v[i + 1] && v[i] != v[i - 1] && v[i] != v[i - 2]) f = max(f,1);
    }
    if(n > 2 && ((v[1] == v[2] && v[1] != v[0]) || (v[n - 1] != v[n - 2] && v[n - 2] == v[n - 3]))) f = max(f,1);
    cout<<c + f<<'\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1; cin >> T;
    while(T--) solve();
    return 0;
}