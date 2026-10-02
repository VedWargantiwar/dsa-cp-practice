#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin>>n;
    unordered_map<int,int> mpp;
    for(int i = 0; i < n;i++){
        int d;
        cin>>d;
        mpp[d - i]++;
    }
    int mx = INT16_MIN;
    for(auto i : mpp){
        mx = max(mx,i.second);
    }
    cout<<n - mx<<'\n';
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