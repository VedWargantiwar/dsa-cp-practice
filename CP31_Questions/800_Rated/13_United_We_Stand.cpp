#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin>>n;
    vi v(n,0);
    int mn = INT_MAX;
    for(int i = 0;i < n;i++){
        cin>>v[i];
        mn = min(mn,v[i]);
    }
    vi b;
    vi c;
    for(int i = 0; i < n;i++){
        if(v[i] == mn) b.push_back(v[i]);
        else c.push_back(v[i]);
    }
    if(b.size() == 0 || c.size() == 0) cout<<-1<<'\n';
    else{
        cout<<b.size()<<' '<<c.size()<<'\n';
        for(auto i : b) cout<<i<<' ';
        cout<<'\n';
        for(auto i : c) cout<<i<<' ';
        cout<<'\n';
    }
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