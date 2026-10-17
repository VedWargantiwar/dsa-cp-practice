#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n,k;
    cin>>n>>k;
    int mn = INT_MAX;
    int no = 0;
    while(n--){
        int d;
        cin>>d;
        mn = min(mn,(k - (d % k)) % k);
        if(d & 1){}
        else no++;
    }
    if(k != 4) cout<<mn<<'\n';
    else{
        if((no >= 2) || ((no == 1) && (mn == 0))) cout<<0<<'\n';
        else if((no == 1) || (mn <= 1)) cout<<1<<'\n';
        else cout<<2<<'\n';  
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