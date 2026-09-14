class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums){
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        int n = nums.size();
        int low = 0,mid,high;
        while(low < n){
            mid = low + 1;
            high = n - 1;
            while(mid < high){
                if(nums[mid] + nums[high] > -nums[low]) high--;
                else if(nums[mid] + nums[high] < -nums[low]) mid++;
                else{
                    ans.push_back({nums[low],nums[mid],nums[high]});
                    int a = mid + 1;
                    while(a < n && nums[mid] == nums[a]) a++;
                    mid = a;
                }
            }
            int b = low + 1;
            while(b < n && nums[low] == nums[b]) b++;
            low = b;
        }
        return ans;
    }
};