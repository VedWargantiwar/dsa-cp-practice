#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin>>n;
    map<int,int>mpp;
    for(int i = 0; i < n;i++){
        int d;
        cin>>d;
        mpp[d]++;
    }
    int a = 1;
    for(auto i : mpp) a = max(a,i.second);
    int c = 0;
    int temp = a;
    while(temp < n){
        temp *= 2;
        c++;
    }
    cout<<(c + n - a)<<'\n';


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