#include <bits/stdc++.h>
using namespace std;
bool primechecker(int a){
    if(a <= 1) return 0;
    for(int i = 2;i*i <= a;i++) if(a % i == 0) return 0;
    return 1; 
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> v(n);
    for(auto &i : v) cin>>i;
    for(auto i : v){
        if(primechecker(i)) cout<<"yes"<<'\n';
        else cout<<"no"<<'\n';
    }
    return 0;
}