#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin>>n;
    vi v;
    int back = 0;
    while(n--){
        int d;
        cin>>d;
        if(d >= back) v.push_back(d);
        else{
            v.push_back(d);
            v.push_back(d);
        }
        back = d;
    }
    cout<<v.size()<<'\n';
    for(auto i : v) cout<<i<<" ";
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