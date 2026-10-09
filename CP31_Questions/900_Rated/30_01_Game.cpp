#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    string s;
    cin>>s;
    int c = 0;
    int d = 0;
    for(auto i : s){
        if(i == '1') c++;
        else d++;
    }
    cout<<(min(c,d) & 1 ? "DA\n" : "NET\n");
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