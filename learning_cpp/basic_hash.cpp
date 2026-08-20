#include <iostream> 
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int arr[] = {1,3,2,1,3,4,1,4};
    int arrs = sizeof(arr)/sizeof(arr[0]);
    int hash[5] = {0,0,0,0,0}; // max element + 1

    for (int i = 0; i < arrs; i++)
    {
        hash[arr[i]]++;
    }
    
    cout<<"the frequency of 1 is: "<<hash[1]<<'\n';
    cout<<"the frequency of 3 is: "<<hash[3]<<'\n';
    cout<<"the frequency of 4 is: "<<hash[4]<<'\n';
    
    return 0;
}