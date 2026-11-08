#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n,q; cin>>n>>q;
    map<int,int> mpp;
    for(int i = 1;i <= n;i++){
        int d;
        cin>>d;
        if(!mpp.count(d)) mpp[d] = i;
    }
    while(q--){
        int d;
        cin>>d;
        cout<<mpp[d]<<' ';
        int t = mpp[d];
        mpp[d] = 0;
        for(auto &i : mpp) if(i.second < t) i.second++;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1;
    while(T--) solve();
    return 0;
}