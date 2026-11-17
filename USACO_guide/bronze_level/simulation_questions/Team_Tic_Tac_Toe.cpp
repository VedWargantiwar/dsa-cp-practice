#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void solve() {
    vector<string> v(3); cin>>v[0]>>v[1]>>v[2];
    int i = 0;
    int d = 0;
    for(int i = 0;i < 3;i++){
        map<char,int> mpp;
        for(auto i : v[i]) mpp[i]++;
        if(mpp.size() < 2) i++;
        else if(mpp.size() < 3) d++;
    }
    for(int i = 0;i < 3;i++){
        map<char,int> mpp;
        for(int a = 0;a < 3;a++) mpp[v[a][i]]++;
        if(mpp.size() < 2) i++;
        else if(mpp.size() < 3) d++;
    }
    map<char,int> mpp;
    mpp[v[0][0]]++; mpp[v[1][1]]++; mpp[v[2][2]]++;
    if(mpp.size() < 2) i++;
    else if(mpp.size() < 3) d++;
    mpp.clear();
    mpp[v[0][2]]++;mpp[v[1][1]]++;mpp[v[2][0]]++;
    if(mpp.size() < 2) i++;
    else if(mpp.size() < 3) d++;
    cout<<i<<'\n'<<d;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int T = 1;
    while(T--) solve();
    return 0;
}