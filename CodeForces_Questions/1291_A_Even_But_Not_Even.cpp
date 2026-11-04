#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int counter = 0;
    for(auto c : s) if((c - '0') & 1) counter++;
    if(counter < 2) cout<<"-1\n";
    else{
        int c = 0;
        for(auto i : s){
            if(c > 1) break;
            if((i - '0') & 1){
                cout<<i;
                c++;
            }
        } 
        cout<<'\n';
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1; cin >> T;
    while(T--) solve();
    return 0;
}