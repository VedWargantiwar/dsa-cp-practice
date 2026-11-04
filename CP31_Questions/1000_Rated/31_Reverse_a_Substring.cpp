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
    for(int i = 0; i < n - 1;i++){
        if(s[i] > s[i + 1]){
            cout<<"YES"<<'\n'<<i + 1<<' '<<i + 2;
            return;
        }
    }
    cout<<"NO";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}