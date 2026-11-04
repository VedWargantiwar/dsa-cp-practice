#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin>>n;
    int mn = 0;
    string s;
    cin>>s;
    int c = 0;
    for(auto i : s){
        if(i == ')') c--;
        else c++;
        mn = min(mn,c);
    }
    cout<<-mn<<'\n';
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