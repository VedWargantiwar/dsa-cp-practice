#include <iostream> 
using namespace std;

void insertionSort(vector<int>& arr){
    for(int i = 1; i < arr.size(); i++){
        for(int a = i; a > 0; a--){
            if(arr[a] >= arr[a - 1]) break;
            swap(arr[a],arr[a - 1]);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    return 0;
}