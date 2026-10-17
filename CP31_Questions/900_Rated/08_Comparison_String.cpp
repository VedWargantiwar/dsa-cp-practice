#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int counter = 1;
    int mx = 1;
    char b = ' ';
    for(auto i : s){
        if(b == i) counter++;
        else counter = 1;
        b = i;
        mx = max(mx,counter);
    }
    cout<<mx + 1<<'\n';
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