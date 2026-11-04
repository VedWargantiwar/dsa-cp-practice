class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.rbegin(),nums.rend());
        int s = 0;
        for(int i = 1; i < nums.size();i++) s += i * (nums[i - 1] - nums[i]);
        return s;
    }
};