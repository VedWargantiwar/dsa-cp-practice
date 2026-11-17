#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()
void fun(vector<int> &v,int &c,int low,int high){
    if(low >= high) return;
    int mid = high - (high - low) / 2;
    fun(v,c,mid,high);
    for(int i = low; i < high;i++){
        if(v[i] != v[high]){
            c++;
            break;
        }
    }
    for(int i = low; i < high;i++) v[i] = v[high]; 
}
void solve() {
    int n; cin>>n;
    vi v(n);
    for(auto &i : v) cin>>i;
    int c = 0;
    fun(v,c,0,n - 1);
    cout<<c<<'\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1; cin >> T;
    while(T--) solve();
    return 0;
}