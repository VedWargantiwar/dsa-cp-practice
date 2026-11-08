#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n,k; cin>>n>>k;
    string s; cin>>s;
    if(n < 2 * k){
        cout<<-1<<'\n';
        return;
    }
    int c = 0;
    for(int i = 0;i < k;i++) if(s[i] == 'L') c++;
    reverse(all(s));
    for(int i = 0;i < k;i++) if(s[i] != 'L') c++;
    cout<<c<<'\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1; cin >> T;
    while(T--) solve();
    return 0;
}