#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n; cin>>n;
    vi hash(26,0);
    while(n--){
        string a,b; cin>>a>>b;
        vi ahash(26,0);
        vi bhash(26,0);
        for(auto i : a) ahash[i - 'a']++;
        for(auto i : b) bhash[i - 'a']++;
        for(int i = 0;i < 26;i++) hash[i] += max(ahash[i],bhash[i]);
    }
    for(auto i : hash) cout<<i<<'\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1;  
    while(T--) solve();
    return 0;
}