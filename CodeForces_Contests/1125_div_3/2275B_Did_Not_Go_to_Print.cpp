#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin>>n;
    vector<bool> v(n,false);
    string s;
    cin>>s;
    vi st;
    for(int i = 0; i < n;i++){
        if(s[i] == '1') st.push_back(i);
        else if(s[i] == '2'){
            if(st.empty()) v[i] = true;
            else{
                v[st.back()] = true;
                st.pop_back();
            }
        }
        else v[i] = true;
    }
    int c = 0;
    for(auto i : v) if(!i) c++;
    cout<<c<<'\n';
    for(int i = 0; i < n;i++) if(!v[i]) cout<<i+1<<' ';
    cout<<'\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1; cin >> T;
    while(T--) solve();
    return 0;
}