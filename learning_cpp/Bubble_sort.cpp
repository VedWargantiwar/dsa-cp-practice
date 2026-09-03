#include <iostream> 
#include <vector> 
using namespace std;

void bubbleSort(vector<int>& arr){
    int n = arr.size();
    for(int i = n - 2; i >= 0; i--){
        bool c = 1;
        for(int a = 0; a <= i; a++){
            if(arr[a] > arr[a + 1]) {swap(arr[a],arr[a+1]); c = 0;}
        }
        if(c) break;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    return 0;
}