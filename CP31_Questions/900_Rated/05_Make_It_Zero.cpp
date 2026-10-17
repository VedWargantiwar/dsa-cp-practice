#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin>>n;
    int temp = n;
    while(temp--){
        int d;
        cin>>d;
    }
    if(n & 1){
        cout<<4<<'\n'<<1<<' '<<n<<'\n'<<2<<' '<<n<<'\n'<<1<<' '<<2<<'\n'<<1<<' '<<2<<'\n';
    }
    else  cout<<2<<'\n'<<1<<' '<<n<<'\n'<<1<<' '<<n<<'\n';
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