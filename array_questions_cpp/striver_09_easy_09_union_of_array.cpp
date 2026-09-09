#include <iostream> 
using namespace std;

vector<int> unionofarr(int arr1[],int arr2[],int n, int m){
    vector<int> ans;
    int l1 = 0, l2 = 0;
    while( l1 < n && l2 < m){
        if(arr1[l1] > arr2[l2]){
            if(ans.empty() || ans.back() != arr2[l2]) ans.emplace_back(arr2[l2]);
            l2++;
        }
        else if(arr1[l1] < arr2[l2]){
            if(ans.empty() || ans.back() != arr1[l1]) ans.emplace_back(arr1[l1]);
            l1++;
        }
        else{
            if(ans.empty() || ans.back() != arr1[l1]) ans.emplace_back(arr1[l1]);l1++;
            l2++;
        }
    }
    while(l1 < n){
        if(ans.empty() || ans.back() != arr1[l1])  ans.emplace_back(arr1[l1]);
        l1++;
    }
    while(l2 < m){
        if(ans.empty() || ans.back() != arr2[l2])  ans.emplace_back(arr2[l2]);
        l2++;
    }
    return ans;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    return 0;
}