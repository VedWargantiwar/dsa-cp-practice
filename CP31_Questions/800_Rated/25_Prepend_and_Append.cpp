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
    int low = 0,high = n - 1;
    while(low <= high && s[low] != s[high]){
        low++;
        high--;
    }
    cout<<high - low + 1<<'\n';
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