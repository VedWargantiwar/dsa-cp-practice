#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()
vi primes;
int pre = [](){
    int const n = 1e5 + 1;
    vector<bool> v(n,1);
    for(int i = 2; i < n;i++){
        if(v[i]){
            primes.push_back(i);
            for(ll a = (ll) i * i; a < n;a += (ll)i) v[a] = 0;
        }
    }
    return 0;
}();
void solve() {
    int d;
    cin>>d;
    int a,b;
    for(auto i : primes){
        if(i - 1 >= d){
            a = i;
            break;
        }
    }
    for(auto i : primes){
        if(i - a >= d){
            b = i;
            break;
        }
    }
    cout<<a * b<<'\n';
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