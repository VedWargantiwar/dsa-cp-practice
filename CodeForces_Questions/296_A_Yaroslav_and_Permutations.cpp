#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n; cin>>n;
    map<int,int> mpp;
    int t = n;
    while(t--){
        int d; cin>>d;
        mpp[d]++;
    }
    bool f = 1;
    for(auto i : mpp) if(i.second > (n + 1) / 2) f = 0;
    cout<<(f ? "YES\n" : "NO\n");
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1;  
    while(T--) solve();
    return 0;
}