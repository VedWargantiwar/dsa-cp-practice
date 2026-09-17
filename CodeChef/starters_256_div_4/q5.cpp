#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void fun(vector<int> &arr,int n) {
    int low = 0;
    int i = n;
    while(i >= 1){
        low = 0;
        while(low < i - 1){
            if(abs(arr[low] - arr[low + 1]) > 1 && arr[low] > arr[low + 1]){
                swap(arr[low],arr[low + 1]);
            }
            low++;
        }
        i--;
    }
   
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin>>n;
        vector<int> arr(n,0);
        for(int i = 0; i < n;i++){
            int r;
            cin>>r;
            arr[i] = r;
        }
        fun(arr,n);
        for(int i = 0; i < n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<'\n';
    }

    return 0;
}