class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int low = 1;
        int high = 0;
        for(auto i : nums){ 
            high += i;
            low = max(low,i);
        }
        int ans = 0;
        while(low <= high){
            int mid = low + (high - low) / 2;
            int left = 0;
            int counter = 1;
            int sum = 0;
            while(left < nums.size()){
                if(nums[left] + sum > mid){
                    counter++;
                    sum = nums[left];
                }
                else sum += nums[left];
                left++;
            }
            if(counter <= k){ 
                high = mid - 1;
                ans = mid;
            }
            else low = mid + 1;
        }
        return ans;
    }
};