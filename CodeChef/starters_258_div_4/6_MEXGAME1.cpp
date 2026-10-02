#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin>>n;
    int mex = 101;
    vi hash(101,0);
    vi v(n,0);
    for(auto &i : v){
        cin>>i;
        hash[i]++;
    }
    for(int i = 0; i < 101; i++){
        if(hash[i] == 0){
            mex = i;
            break;
        }
    }
    int counter = 0;
    for(int i = 0;i < n;i++){
        if(v[i] > mex) counter += v[i] - mex - 1;
        else if(hash[v[i]] > 1){
            counter += v[i];
            hash[v[i]]--;
        }
    }
    cout<<(counter % 2 != 0 ? "Alice\n" : "Bob\n");
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