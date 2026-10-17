#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    string s;
    cin>>s;
    int o = 0;
    int z = 0;
    int n = 0;
    for(auto i : s){
        if(i == '1') o++;
        else z++;
    }
    for(auto i : s){
        if(i == '1') z--;
        else o--;
        if(z < 0 || o < 0) break;
        n++;
    }
    cout<<s.size() - n<<'\n';
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