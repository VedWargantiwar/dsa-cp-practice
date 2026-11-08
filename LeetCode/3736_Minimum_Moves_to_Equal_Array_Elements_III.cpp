class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int s = 0;
        for(auto i : nums) s += nums[nums.size() - 1] - i;
        return s; 
    }
};