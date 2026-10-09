#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()
vi squares;
int pre = {}(){
    for(int i = 1; i < 61;i++) squares.push_back(i * i);
    return 0;
}();

void solve() {
    int n,k;
    cin>>n>>k;
    map<int,int> mpp;
    for(int i = 1; i <= n;i++) mpp[i]++;
    
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