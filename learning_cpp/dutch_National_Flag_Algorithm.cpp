#include <iostream> 
#include <vector> 
using namespace std;

vector<int> Pivot(vector<int>& array, int k){
    int low = 0, mid = 0, n = array.size();
    int high = n - 1;
    while(mid <= high){
        if(array[mid] > k){swap(array[mid],array[high]); high--;}
        else if(array[mid] < k){swap(array[mid],array[low]);low++;mid++;}
        else mid++;
    }
    return array;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    int k;
    cin>>n>>k;
    vector<int> array(n);
    for(int i = 0; i < n; i++){
        cin>>array[i];
    }
    Pivot(array,k);
    for(int i = 0; i < n; i++){
        cout<<array[i]<<' ';
    }
    return 0;
}