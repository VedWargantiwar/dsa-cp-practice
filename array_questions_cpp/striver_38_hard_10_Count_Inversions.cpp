class Solution {
  public:
    void merge(vector<int> &arr, int low,int mid,int high,long long &count){
        vector<int> temp(high - low + 1,0);
        int i = 0;
        int midp = mid + 1;
        while(low <= mid && midp <= high){
            if(arr[low] > arr[midp]){
                temp[i++] = arr[midp++];
                count += mid - low + 1;
            }
            else temp[i++] = arr[low++];
        }
        while(low <= mid) temp[i++] = arr[low++];
        while(midp <= high) temp[i++] = arr[midp++];
        i--;
        while(i >= 0) arr[high--] = temp[i--];
    }
    void divide(vector<int> &arr,int low,int high,long long &count){
        if(low >= high) return;
        int mid = (low + high) / 2;
        divide(arr,low,mid,count);
        divide(arr,mid + 1,high,count);
        merge(arr,low,mid,high,count);
    }
    int inversionCount(vector<int> &arr) {
        long long count = 0;
        int n= arr.size();
        divide(arr,0,n - 1,count);
        return count;
    }
};