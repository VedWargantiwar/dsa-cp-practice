#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin>>n;
    int back;
    cin>>back;
    if(back == 1) back++;
    cout<<back<<' ';
    n--;
    while(n--){
        int d;
        cin>>d;
        if(d == 1) d++;
        if(d % back == 0) d++;
        cout<<d<<' ';
        back = d;
    }
    cout<<'\n';
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