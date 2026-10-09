#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n,m;
    cin>>n>>m;
    string x,s;
    cin>>x>>s;
    int count = 0;
    while(x.size() < s.size()){
        x += x;
        count++;
    }
    for(int i = 0; i < 2;i++){
        if(x.find(s) != string::npos){
            cout<<count<<'\n';
            return;
        }
        else{
            x += x;
            count++;
        }
    }
    cout<<-1<<'\n';
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