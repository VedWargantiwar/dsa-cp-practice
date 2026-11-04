#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    ll a,b;
    cin>>a>>b;
    int c = 0;
    while(a % 2 == 0){
        c++;
        a /= 2;
    }
    while(b % 2 == 0){
        c--;
        b /= 2;
    }
    c = abs(c);
    if(a != b) cout<<-1<<'\n';
    else{
        int cc = 0;
        for(int i = 3; i > 0;i--){
            cc += c / i;
            c %= i;
        }
        cout<<cc<<'\n';
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