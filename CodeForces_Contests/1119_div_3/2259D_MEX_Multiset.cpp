#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin>>n;
    vector<pair<int,int>> v(n);
    int c = 0;
    for(int i = 0;i < n;i++){
        cin>>v[i].first;
        v[i].second = i;
        if(v[i].first == 0) c++;
    }
    if(c == 0){
        cout<<"YES"<<'\n';
        for(auto i : v) cout<<'A';
        cout<<'\n';
    }
    else if(c == 1) cout<<"NO"<<'\n';
    else{
        cout<<"YES"<<"\n";
        sort(all(v));
        vector<char> ans(n);
        ans[v[0].second] = 'B';
        for(int i = 1; i < n;i++){
            if(v[i].first == 0) ans[v[i].second] = 'A';
            else ans[v[i].second] = 'C';
        }
        for(auto i : ans) cout<<i;
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