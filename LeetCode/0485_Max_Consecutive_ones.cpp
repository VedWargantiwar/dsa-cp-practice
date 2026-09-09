class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int a = 0;
        int ma = 0;
        for(int i = 0; i < nums.size();i++){
            if(!nums[i]) a = 0;
            else a += 1;
            ma  = max(ma,a);
        }
        return ma;
    }
};