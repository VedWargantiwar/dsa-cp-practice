#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin>>n;
    vector<pair<int,int>> v(n);
    for(int i = 0; i < n;i++){
        cin>>v[i].first;
        v[i].second = i;
    }
    sort(all(v));
    int c = 1;
    int back = v[0].first;
    vi a(n);
    int backi = 0;
    for(int i = 1; i < n;i++){
        if(v[i].first == back){
            c++;
            if(c > 1) a[v[i].second] = v[i - 1].second;
        }
        else{
            if(c < 2){
                cout<<-1<<'\n';
                return;
            }
            c = 1;
            a[v[backi].second] = v[i - 1].second;
            backi = i;
        }
        back = v[i].first;
    }
    if(c < 2){
        cout<<-1<<'\n';
        return;
    }
    a[v[backi].second] = v[n - 1].second;
    for(auto i : a) cout<<i + 1<<' ';
    cout<<'\n';
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