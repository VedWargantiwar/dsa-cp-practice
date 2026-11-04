#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n,k;
    cin>>n>>k;
    if(k < n || k > 2*n - 1){
        cout<<-1<<'\n';
        return;
    }
    k = 2*n - 1 - k;
    vi v(n * n);
    for(int i = 1; i <= n * n;i++) v[i - 1] = i;
    for(int i = 1; k > 0;i++){
        swap(v[i],v[i * (n + 1)]);
        k--;
    }
    for(int i = 0;i < n;i++){
        for(int a = 0;a < n;a++) cout<<v[i *n + a]<<' ';
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