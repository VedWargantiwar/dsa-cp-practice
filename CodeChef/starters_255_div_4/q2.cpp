#include <bits/stdc++.h>
using namespace std;
string checker(string &a,string &b,int l){
    int hash1[2] = {0};
    int hash2[2] = {0};
    for(int i = 0; i < l;i++){
        hash1[a[i] - 'a']++;
    }
    for(int i = 0; i < l;i++){
        hash2[b[i] - 'a']++;
    }
    if((hash1[0] == hash2[0] && hash1[0] != 0 && hash1[1] != 0) || hash1[0] == hash2[1]) return "yes";
    return "no";

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        string a,b;
        int l;
        cin>>l>>a>>b;
        cout<<checker(a,b,l)<<'\n';
    }
    return 0;
}