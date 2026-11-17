#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n; cin>>n;
    int a;
    if(n <= 1399) a = 4;
    else if(n <= 1599) a = 3;
    else if(n <= 1899) a = 2;
    else a = 1;
    cout<<"Division "<<a<<'\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1; cin >> T;
    while(T--) solve();
    return 0;
}