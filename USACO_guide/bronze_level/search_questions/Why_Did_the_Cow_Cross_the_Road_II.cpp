#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    string s; cin>>s;
    map<string,int> mpp;
    vi v(26,1);
    for(int i = 0;i < s.size();i++){
        map<string,int> ansm;
        if(v[s[i] - 'A']){
            v[s[i] - 'A'] = 0;
            for(int a = i + 1; a < s.size() && s[a] != s[i];a++){
                string ans = "";
                if(s[a] > s[i]){
                    ans += s[i];
                    ans += s[a];
                }
                else{
                    ans += s[a];
                    ans += s[i];
                }
                ansm[ans]++;
            }
            for(auto i : ansm) if(i.second < 2) mpp[i.first]++;
        }
    }
    cout<<mpp.size();
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1; 
    while(T--) solve();
    return 0;
}