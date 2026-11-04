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
    sort(v.rbegin(),v.rend());
    while(v.size() > 0){
        vi ans;
        cout<<v[0]<<' ';
        for(int i = 1; i <v.size();i++){
            if(v[i] == v[i - 1]) ans.push_back(v[i]);
            else cout<<v[i]<<' ';
        }
    v = ans;
    }
    cout<<'\n';
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