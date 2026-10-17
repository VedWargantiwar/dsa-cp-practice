#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n,d;
    cin>>n>>d;
    int c = 0;
    vi v(n);
    for(auto &i : v) cin>>i;
    sort(all(v));
    reverse(all(v));
    for(auto i : v){
        n -= d / i + 1;
        if(n >= 0) c++;
        else break;
    }
    cout<<c<<'\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}