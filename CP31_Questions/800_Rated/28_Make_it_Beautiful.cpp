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
    int p = 0;
    bool c = 1;
    bool s = 1;
    for(int i = 0;i < n;i++){
        cin>>v[i];
        if(p == v[i]) c = 0;
        if(i > 0 && v[i] != v[i - 1]) s = 0;
        p += v[i];
    }
    if(s){
        cout<<"NO\n";
        return;
    }
    if(c){
        cout<<"YES\n";
        for(auto i : v) cout<<i<<' ';
        cout<<'\n';
    }
    else{
        sort(all(v));
        reverse(all(v));
        swap(v[1],v[n-1]);
        cout<<"YES\n";
        for(auto i : v) cout<<i<<' ';
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