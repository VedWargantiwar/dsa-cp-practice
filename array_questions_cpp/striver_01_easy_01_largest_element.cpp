#include <iostream> 
#include <climits> 
#include <vector> 
using namespace std;

int largestElement(vector<int> &v){
    int ma = INT_MIN;
    for(int i = 0; i < v.size();i++){
        ma = max(ma,v[i]);
    }
    return ma;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> arr1 = {2, 5, 1, 3, 0};
    vector<int> arr2 = {8, 10, 5, 7, 9};
   
    cout << "The Largest element in the array is: " << largestElement(arr1) << endl;
    cout << "The Largest element in the array is: " << largestElement(arr2);
    return 0;
}