#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin>>n;
    int mn = INT_MAX;
    while(n--){
        int d;
        cin>>d;
        mn = min(mn,abs(d));
    }
    cout<<mn;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();

    return 0;
}