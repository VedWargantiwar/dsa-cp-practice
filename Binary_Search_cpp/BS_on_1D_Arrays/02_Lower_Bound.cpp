class Solution {
  public:
    int lowerBound(vector<int>& arr, int target) {
        int low = 0,high = arr.size() - 1;
        int i = arr.size();
        while(low <= high){
            int mid = low + (high - low) / 2;
            if(arr[mid] < target) low = mid + 1;
            else{
                high = mid - 1;
                i = mid;
            }
        }
        return i;
    }
};
