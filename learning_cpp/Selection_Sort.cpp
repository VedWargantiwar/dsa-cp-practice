#include <iostream> 
#include <algorithm> 
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    // Selection sort module
    for(int i = 0; i < n - 1;i++){
        int mini = i;
        for(int a = i; a < n; a++){
            if(arr[mini] > arr[a])  mini = a;
        }
        swap(arr[i],arr[mini]);
    }
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}