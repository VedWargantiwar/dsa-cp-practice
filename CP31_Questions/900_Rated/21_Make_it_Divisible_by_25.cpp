#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin>>n;
    string s = to_string(n);
    int high = s.size() - 1;
    int c = 0;
    bool f = 0;
    while(high >= 0){
        if(!f){
            if(s[high] != '0') c++;
            else f = 1;
        }
        else{
            if(s[high] == '0' || s[high] == '5') break;
            else c++;
        }
        high--;
    }
    int mn = c;
    high = s.size() - 1;
    c = 0;
    f = 0;
    while(high >= 0){
        if(!f){ 
            if(s[high] != '5') c++;
            else f = 1;
        }
        else{
            if(s[high] == '7' || s[high] == '2') break;
            else c++;
        }
        high--;
    }
    cout<<min(mn,c)<<'\n';
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