class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0, high = nums.size() - 1;
        int mn = INT_MAX;
        while(low <= high){
            int mid = low + (high - low) / 2;
            if(nums[mid] >= nums[low]){
                mn = min(nums[low],mn);
                low = mid + 1;
            }
            else{
                mn = min(nums[mid],mn);
                high = mid - 1;
            }
        }
        return mn;
    }
};