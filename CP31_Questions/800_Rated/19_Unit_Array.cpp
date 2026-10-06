#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin>>n;
    int oc = 0, ic = 0;
    while(n--){
        int d;
        cin>>d;
        if(d == 1) oc++;
        else ic++;
    }
    if(ic > oc){
        int d = (ic - oc + 1) / 2;
        cout<<((ic - d) % 2 ? d + 1 : d);
        cout<<'\n';
    }
    else{
        cout<<(ic % 2 ? 1 : 0);
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