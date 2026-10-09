#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin>>n;
    int no = 0;
    int c = 0;
    int mn = 0;
    for(int i = 0; i < n;i++){
        int d;
        cin>>d;
        if(d == 0){
            c = 0;
            no++;
        }
        else c++;
        mn = max(mn,c);
    }
    if(no == n) cout<<0<<'\n';
    else if(n - mn == no) cout<<1<<'\n';
    else cout<<2<<'\n';
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