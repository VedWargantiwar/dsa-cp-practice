#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    string s,v;
    cin>>s>>v;
    int low = 0,mid = 0;
    while(low < s.size() && mid < v.size()){
        if(s[low] != v[mid]) low++;
        else{
            low++;
            mid++;
        }
    }
    if(mid == v.size()) cout<<"YES\n";
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