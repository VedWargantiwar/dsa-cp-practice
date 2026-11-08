#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n,a,b; cin>>n>>a>>b;
    string x,y; cin>>x>>y;
    vi v(n);
    for(int i = 0;i < n;i++) v[i] = (x[i] != y[i]);
    int c = 0;
    int mx = 0;
    int l = 0;
    for(auto i : v){
        if(i){
            c++;
            l++;
        }
        else l = 0;
        mx = max(mx,l);
    }
    if(c & 1) cout<<-1<<'\n';
    else{
        if(!(c == 2) || mx == 1) cout<< 1LL * b * c / 2<<"\n";
        else cout<<min(2 * b,a)<<'\n';
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1; cin >> T;
    while(T--) solve();
    return 0;
}