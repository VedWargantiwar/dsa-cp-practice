#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

vi v;
int pre = [](){
    for(int i = 1; i <= 999999;i++){
        int d = 0;
        int temp = i;
        while(temp > 0){
            int t = temp  % 10;
            temp /= 10;
            if(t > 0) d++;
        }
        if(d == 1) v.emplace_back(i);
    }
    return 0;
}();
void solve() {
    int n;
    cin>>n;
    int ub = upper_bound(all(v),n) - v.begin();
    cout<<ub<<'\n';
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