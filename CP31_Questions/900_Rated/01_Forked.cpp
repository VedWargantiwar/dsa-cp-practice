#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int a,b;
    cin>>a>>b;
    int x,y;
    cin>>x>>y;
    int p,q;
    cin>>p>>q;
    vector<pair<int,int>> k = {{x - a,y - b},{x + a,y + b},{x + a,y - b},{x - a,y + b},{x + b,y + a},{x - b,y - a},{x - b,y + a},{x + b,y - a}};
    vector<pair<int,int>> v = {{p - a,q - b},{p + a,q + b},{p + a,q - b},{p - a,q + b},{p + b,q + a},{p - b,q - a},{p - b,q + a},{p + b,q - a}};
    int c = 0;
    for(auto i : k){
        for(auto a : v){
            if(i == a) c++;
        }
    }
    if(a == b) c /= 4;
    cout<<c<<'\n';
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