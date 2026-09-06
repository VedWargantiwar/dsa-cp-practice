#include <iostream> 
using namespace std;

void recursiveBubble(int arr[],int i,int &c, int n){
    if(i >= n - 1) return;
    recursiveBubble(arr, i + 1,c,n);
    if(c == 1) return;
    c = 1;
    for(int a = 0; a <= i; a++){
        if(arr[a] > arr[a + 1]) {swap(arr[a],arr[a + 1]); c = 0; }
    }

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int c = 0;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    recursiveBubble(arr,0,c,n);
    return 0;
}