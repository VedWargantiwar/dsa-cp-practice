class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int s = 0;
        sort(nums.begin(),nums.end());
        for(int i = 1;i < nums.size();i++){
            s += min(i,(int)nums.size() - i) * (nums[i] - nums[i - 1]);
        }
        return s;
    }
};