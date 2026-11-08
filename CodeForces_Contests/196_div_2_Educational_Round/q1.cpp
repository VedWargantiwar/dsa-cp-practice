#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int l,r; cin>>l>>r;
    int c = 0;
    int s = 0;
    for(int i = l ; i <= r;i++) s += i;
    while(s < l || s > r){
        s = 0;
        if(abs(r) > abs(l)) r--;
        else l++;
        for(int i = l ; i <= r;i++) s += i;
        c++;
    } 
    cout<<c<<'\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1; cin >> T;
    while(T--) solve();
    return 0;
}