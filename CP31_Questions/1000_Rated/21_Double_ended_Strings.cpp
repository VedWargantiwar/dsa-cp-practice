#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    string a,b;
    cin>>a>>b;
    int n = a.size();
    int m = b.size();
    int mx = 0;
    for(int i = 0; i < n;i++){
        for(int j = 0; j < m;j++){
            if(a[i] == b[j]){
                int count = 0;
                int x = i;
                int y = j;
                while(x < n && y < m && a[x++] == b[y++]) count++;
                mx = max(count,mx);
            }
        }
    }
    cout<<n + m - 2 * mx<<'\n';
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