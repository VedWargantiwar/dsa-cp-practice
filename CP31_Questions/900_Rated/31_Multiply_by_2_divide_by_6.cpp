#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin>>n;
    int c = 0;
    int d = 0;
    while(n % 2 == 0){
        c++;
        n /= 2;
    } 
    while(n % 3 == 0){
        d++;
        n /= 3;
    }
    if(n != 1 || d < c) cout<<-1<<'\n';
    else cout<<(2 * d - c)<<'\n';
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