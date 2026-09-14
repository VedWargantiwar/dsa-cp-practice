class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target){
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int low = 0;
        vector<vector<int>> ans;
        while(low < n){
            int mid1 = low + 1;
            while(mid1 < n){
                int mid2 = mid1 + 1;
                int high = n - 1;
                while(mid2 < high){
                    long long sum = (long long)nums[low] + nums[mid1] + nums[mid2] + nums[high];
                    if(sum > target) high--;
                    else if(sum < target) mid2++;
                    else{
                        ans.push_back({nums[low],nums[mid1],nums[mid2],nums[high]});
                        mid2++;
                        while(mid2 < n && nums[mid2] == nums[mid2 - 1]) mid2++;
                    }
                }
                mid1++;
                while(mid1 < n && nums[mid1] == nums[mid1 - 1]) mid1++;
            }
            low++;
            while(low < n && nums[low] == nums[low - 1]) low++;
        }
        return ans;
    }
};