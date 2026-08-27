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
    int high = (*m.begin()).first;
    int low = (*m.begin()).first;
    for(auto i : m){
        if(i.second > m[high]) high = i.first;
        if(i.second < m[low]) low = i.first;
    }
    cout<<high<<" "<<low;
    return 0;
}