#include<bits/stdc++.h>
using namespace std;

int secondlargestElement(vector<int> &arr){
    int largest = INT_MIN;
    int selargest = INT_MIN;
    for(int i = 0; i < arr.size();i++){
        if(arr[i] > largest) {selargest = largest; largest = arr[i];}
        else if(arr[i] > selargest && arr[i] < largest) selargest = arr[i];
    }
    return selargest;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> arr1 = {2, 5, 1, 3, 0};
    vector<int> arr2 = {10,5,10};
   
    cout << "The Second Largest element in the array is: " << secondlargestElement(arr1) << endl;
    cout << "The Second Largest element in the array is: " << secondlargestElement(arr2);
    return 0;
}