#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin>>n;
    int a = 0,b = 0,c = 0;
    while(n--){
        int d;
        cin>>d;
        if(d & 1) a++;
        else {
            d /= 2;
            if(d & 1) b++;
            else c++;
        }
    }
    cout<<max({a,b,c})<<'\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1; cin >> T;
    while(T--) solve();
    return 0;
}