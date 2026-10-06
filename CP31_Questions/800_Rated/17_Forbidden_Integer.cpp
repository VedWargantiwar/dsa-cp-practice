#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n,k,x;
    cin>>n>>k>>x;
    if(x != 1){
        cout<<"YES\n"<<n<<'\n';
        while(n--) cout<<1<<' ';
        cout<<'\n';
    }
    else{
        if(n & 1){
            if(k < 3) cout<<"NO\n";
            else{
                cout<<"YES\n";
                int t = n / 2;
                cout<<t<<'\n';
                cout<<3<<' ';
                t--;
                while(t--) cout<<2<<' ';
                cout<<'\n';
            }
        }
        else{
            if(k < 2)  cout<<"NO\n";
            else{
                cout<<"YES\n";
                cout<<n/2<<'\n';
                int t = n / 2;
                while(t--) cout<<2<<' ';
                cout<<'\n';
            }
        }
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