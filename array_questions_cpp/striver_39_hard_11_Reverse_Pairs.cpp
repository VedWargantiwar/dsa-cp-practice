class Solution {
public:
    void merge(vector<int>& arr,int low,int high,int mid,int &counter){
        vector<int> temp(high - low + 1,0);
        int midp = mid + 1;
        int temph = high;
        int tempm = mid;
        while(temph >= midp && tempm >= low){
            if(arr[tempm] > (long long)2 * arr[temph]){
                counter += temph - midp + 1;
                tempm--;
            }
            else temph--;
        }
        int i = 0;
        while(low <= mid && midp <= high){
            if(arr[low] > arr[midp]) temp[i++] = arr[midp++];
            else temp[i++] = arr[low++];
        }
        while(low <= mid) temp[i++] = arr[low++];
        while(midp <= high) temp[i++] = arr[midp++];
        while(i > 0) arr[high--] = temp[--i];
    }
    void divide(vector<int>& arr,int low,int high,int &counter){
        if(low >= high) return;
        int mid = (low + high) / 2;
        divide(arr,low,mid,counter);
        divide(arr,mid + 1,high,counter);
        merge(arr,low,high,mid,counter);
    }
    int reversePairs(vector<int>& nums) {
        int counter = 0;
        divide(nums,0,nums.size() - 1,counter);
        return counter;
    }
};
