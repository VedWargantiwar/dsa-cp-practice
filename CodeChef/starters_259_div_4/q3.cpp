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
    int x = 0,y = 0;
    for(auto i : s){
        if(i == 'U') y++;
        else if(i == 'D') y--;
        else if(i == 'L') x++;
        else x--; 
    }
    if(((abs(x) - 2) == 0 && y == 0) || (x == 0 && (abs(y) - 2) == 0 )) cout<<"YES\n";
    else cout<<"NO\n";
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