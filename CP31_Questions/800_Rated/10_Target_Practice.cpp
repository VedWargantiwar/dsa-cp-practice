#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int score = 0;
    for(int i = 1; i <= 100;i++){
        char d;
        cin>>d;
        if(d == 'X'){
            int a = i % 10;
            if(!a) a = 10;
            int b = (i + 9) / 10;
            if(a == 1 || a == 10 || b == 1 || b == 10) score += 1;
            else if(a == 2 || a == 9 || b == 2 || b == 9) score += 2;
            else if(a == 3 || a == 8 || b == 3 || b == 8) score += 3;
            else if(a == 4 || a == 7 || b == 4 || b == 7) score += 4;
            else if(a == 5 || a == 6 || b == 5 || b == 6) score += 5;
        }
    }
    cout<<score<<'\n';
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