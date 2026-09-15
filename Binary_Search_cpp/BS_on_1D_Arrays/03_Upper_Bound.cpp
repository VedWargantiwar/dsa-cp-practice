class Solution {
  public:
    int upperBound(vector<int>& arr, int target) {
        int low = 0, high = arr.size() - 1;
        int i = arr.size();
        while(low <= high){
            int mid = low + (high - low)/2;
            if(arr[mid] > target){
                i = mid;
                high = mid - 1;
            }
            else low = mid + 1;
        }
        return i;
    }
};
