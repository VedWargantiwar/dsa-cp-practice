#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin>>n;
    unordered_map<int,int> mpp;
    int temp = n;
    while(temp--){
        int d;
        cin>>d;
        mpp[d]++;
    }
    if(mpp.size() > 2){
        cout<<"NO\n";
        return;
    }
    if(mpp.size() == 1){
        cout<<"YES\n";
        return;
    }
    int a = mpp.begin()->second;
    int b = next(mpp.begin())->second;
    cout<<(abs(a - b) == n % 2 ? "YES\n" : "NO\n");
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