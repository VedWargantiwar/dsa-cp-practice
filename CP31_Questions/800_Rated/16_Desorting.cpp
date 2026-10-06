#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin>>n;
    bool sorted = 1;
    int mn = INT_MAX;
    int back;
    cin>>back;
    n--;
    while(n--){
        int d;
        cin>>d;
        if(back > d) sorted = 0;
        mn = min(mn,d - back);
        back = d;
    }
    cout<<(sorted == 0 ? 0 : mn / 2 + 1);
    cout<<'\n';

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