#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int a,b;
    cin>>a>>b;
    int n = a - 1;
    int arr[] = {n,1,n+1,0};
    int xr = arr[n % 4] ^ b;
    if(xr == 0){
        cout<<a<<'\n';
        return;
    }
    cout<<(xr == a ? a + 2 : a + 1)<<'\n';
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