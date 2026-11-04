#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    string s;
    cin>>s;
    char c;
    cin>>c;
    if(c != '9'){
        while(1){
            bool f = 1;
            for(auto i : s) if(i == c) f = 0;
            if(f) break;
            int l = s.size();
            for(int i = 0; i < s.size();i++){
                if(s[i] == c){
                   s[i] += 1;
                   l = i;
                  break;
                }
            }
            for(int i = l + 1; i < s.size();i++) s[i] = '0';
        }
        cout<<s<<'\n';
    }
    else{
        while(1){
            bool f = 1;
            for(auto c : s) if(c == '9') f = 0;
            if(f) break;
            if(s[0] == '9'){
                ll n = 1;
                for(int i = 0; i < s.size();i++) n *= 10;
                cout<<n<<'\n';
                return;
            }
            int l = s.size();
            for(int i = 0; i < s.size();i++){
               if(s[i] == '9'){
                   l = i;
                   s[i - 1]++;
                   break;
               }
            }
            for(int i = l; i < s.size();i++) s[i] = '0';
        }
        cout<<s<<'\n';
    }
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