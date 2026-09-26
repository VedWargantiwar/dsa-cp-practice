#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin>>n;
    int temp = 0;
    int mn = INT_MAX;
    int mx = INT_MIN;
    int counter = 0;
    while(n--){
        int r;
        cin>>r;
        if(r < temp) counter = 1;
        if(counter){
            mn = min(mn,r);
            mx = max(mx,r);
        }
        temp = r;
    }
    if(mn = INT_MAX){
        cout<<-1;
        return;
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