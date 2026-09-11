class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int s = 0, ms = nums[0];
        for(int i = 0; i < nums.size();i++){
            s += nums[i];
            ms = max(ms,s);
            if(s < 0) s = 0;
        }
        return ms;
    }
};