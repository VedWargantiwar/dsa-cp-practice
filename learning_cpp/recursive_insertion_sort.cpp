#include <iostream> 
using namespace std;

void recursiveInsertion(int arr[],int n,int i){
    if(i >= n) return;
    for(int a = i; a > 0;a--){
        if(arr[a] >= arr[a-1]) break;
        swap(arr[a],arr[a - 1]);
    }
    recursiveInsertion(arr,n,i + 1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int c = 0;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    recursiveInsertion(arr,n,1);
    return 0;
}