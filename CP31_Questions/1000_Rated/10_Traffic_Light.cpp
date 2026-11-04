// #include <bits/stdc++.h>
// using namespace std;

// using ll = long long;
// using vi = vector<int>;
// using vll = vector<ll>;

// #define all(x) (x).begin(), (x).end()

// void solve() {
//     int n;
//     cin>>n;
//     char c;
//     cin>>c;
//     string s;
//     cin>>s;
//     if(c == 'g'){
//         cout<<0<<'\n';
//         return;
//     }
//     vi v;
//     for(int i = 0; i < 2 * n;i++) if(s[i % n] == 'g') v.push_back(i);
//     int ans = 0;
//     for(int i = 0;i < n;i++){
//         if(s[i] == c){
//             int lb = lower_bound(v.begin(),v.end(),i) - v.begin();
//             ans = max(v[lb] - i,ans);
//         }
//     }
//     cout<<ans<<'\n';
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;

//     while (t--) {
//         solve();
//     }

//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin>>n;
    char c;
    cin>>c;
    string s;
    cin>>s;
    s += s;
    int ans = 0;
    int l = s.size() - 1;
    for(int i = s.size() - 1;i >= 0;i--){
        if(s[i] == 'g') l = i;
        else if(s[i] == c) ans = max(ans,l - i);
    }
    cout<<ans<<'\n';
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