#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()

void sort(vector<int> &v,int start,int end) {
    int low = start;
    int med = low;
    int high = end;
    if(low >= high) return;
    int k = v[low];
    while(med <= high){
        if(v[med] < k){
            swap(v[med],v[low]);
            med++;
            low++;
        }
        else if(v[med] > k){
            swap(v[med],v[high]);
            high--;
        }
        else{
            med++;
        }
    }
    sort(v,start,low - 1 );
    sort(v,high + 1,end);

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> arr = {4,6,2,5,7,9,1,3};
    
    sort(arr,0,arr.size() - 1);
    for(auto i : arr) cout<<i<<' ';
    return 0;
}