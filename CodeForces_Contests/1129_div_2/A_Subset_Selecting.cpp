#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n,k;
    cin>>n>>k;
    vi hash(101,0);
    while(n--){
        int d;
        cin>>d;
        hash[d]++;
    }
    int s = 0;
    for(int i = 0; i <= 100;i++){
        s += hash[i];
        if(s < k || hash[i] < 1){
            cout<<i<<'\n';
            return;
        }
        else s -= k;
    }
    cout<<101<<'\n';
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