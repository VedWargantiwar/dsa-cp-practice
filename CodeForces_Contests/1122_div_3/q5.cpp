#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()
vector<bool> prime(2e5 + 1,true);
int pre = [](){
    prime[0] = 0;
    prime[1] = 0;
    const ll n = 2e5 + 1;
    for(ll i = 2;i * i < n;i++){
        if(prime[i]) for(ll a = i * i; a < n;a += i) prime[a] = 0;
    }
    return 0;
}();
void solve() {
    int n,k;
    cin>>n>>k;
    int a = 0;
    while(n--){
        int d;
        cin>>d;
        int c = 1;
        int checker = a;
        while(true){
            if(d <= k) break;
            else if(prime[d]){
                a += c;
                break;
            }
            else{
                a += c;
                int l = d;
                while((prime[l] == 0) || (d % l != 0)) l--;
                d /= l;
                c *= l;
            }
        }
        cout<<a - checker<<' ';
    }
    cout<<a<<'\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1; cin >> T;
    while(T--) solve();
    return 0;
}