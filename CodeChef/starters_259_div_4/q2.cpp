#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n,m;
    cin>>n>>m;
    string s,v;
    cin>>s>>v;
    int l = 0;
    int r = 0;
    int mx = 0;
    map<char,int> mpp;
    for(auto i : v) mpp[i]++;
    for(int i = 0; i < n;i++){
        if(mpp[s[i]] > 0){
            l++;
            r = 0;
        }
        else{
            r++;
            l = 0;
        }
        mx = max({mx,l,r});
    }
    cout<<mx<<'\n';
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