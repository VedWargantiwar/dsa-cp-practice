#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n; cin>>n;
    vector<pair<char,int>> v(n);
    for(auto &i : v) cin>>i.first>>i.second;
    int ans = n;
    for(int i = 0;i < n;i++){
        int c = 0;
        for(int a = 0; a < n;a++){
            if(v[i].first != v[a].first){
                if(v[i].first == 'G' && v[i].second > v[a].second) c++;
                if(v[i].first == 'L' && v[i].second < v[a].second) c++;
            }
            else{
                 if(v[i].first == 'G' && v[i].second < v[a].second) c++;
                if(v[i].first == 'L' && v[i].second > v[a].second) c++;
            }
        }
        ans = min(ans,c);
    }
    cout<<ans;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1;
    while(T--) solve();
    return 0;
}