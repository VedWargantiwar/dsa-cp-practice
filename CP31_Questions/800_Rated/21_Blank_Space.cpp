#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin>>n;
    int d = 0;
    int md = 0;
    while(n--){
        int id;
        cin>>id;
        if(id == 0) d++;
        else d = 0;
        md = max(md,d);
    }
    cout<<md<<'\n';
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