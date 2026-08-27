#include <iostream> 
#include <unordered_map> 
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    unordered_map<int,int> m;
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
        m[arr[i]]++;
    }
    for(auto i : m){
        cout<<i.first<<"->"<<i.second<<'\n';
    }
    for(auto i = m.begin(); i != m.end();i++){
        cout<<i->first<<"->"<<i->second<<'\n';
        cout<<(*i).first<<"->"<<(*i).second<<'\n';
    }

    
    return 0;
} 