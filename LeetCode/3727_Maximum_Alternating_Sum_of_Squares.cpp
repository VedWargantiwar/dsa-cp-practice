class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        for(int i = 0;i< nums.size();i++) nums[i] = abs(nums[i]);
        sort(nums.rbegin(),nums.rend());
        int a = (nums.size() - 1) / 2;
        long long s = 0;
        for(int i = 0;i <= a;i++) s += 1LL*nums[i] * nums[i];
        for(int i = a + 1; i < nums.size();i++) s -= 1LL*nums[i]*nums[i];
        return s;
    }
};