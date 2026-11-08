#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    string a,b; cin>>a>>b;
    int k1 = b[0] - 'a',k2 = b[1] - '1',q1 = a[0] - 'a',q2 = a[1] - '1';
    vector<pair<int,int>> v = {{k1 + 2,k2 + 1},{k1 + 2,k2 - 1},{k1 - 2,k2 + 1},{k1 - 2,k2 - 1},{k1 + 1,k2 + 2},{k1 + 1,k2 - 2},{k1 - 1,k2 + 2},{k1 - 1,k2 - 2}};
    vector<pair<int,int>> v2 = {{q1 + 2,q2 + 1},{q1 + 2,q2 - 1},{q1 - 2,q2 + 1},{q1 - 2,q2 - 1},{q1 + 1,q2 + 2},{q1 + 1,q2 - 2},{q1 - 1,q2 + 2},{q1 - 1,q2 - 2}};
    int r = 48;
    for(auto i : v) if(i.first >= 0 && i.first < 8 && i.second >= 0 && i.second < 8 && i.first != q1 && i.second != q2) r--;
    for(auto i : v2) if(i.first >= 0 && i.first < 8 && i.second >= 0 && i.second < 8) r--;
    for(auto i : v){
        for(auto j : v2){
            if(i == j && i.first >= 0 && i.first < 8 && i.second >= 0 && i.second < 8 && i.first != q1 && i.second != q2) r++;
        }
    }
    cout<<r<<'\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    solve();
    return 0;
}