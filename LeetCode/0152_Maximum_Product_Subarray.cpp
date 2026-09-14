class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int mp = nums[0];
        int p = nums[0];
        int maxp = nums[0];
        for(int i = 1; i < nums.size();i++){
            if(nums[i] < 0) swap(p,mp);
            p = max(nums[i],p*nums[i]);
            mp = min(nums[i],mp*nums[i]);
            maxp = max(maxp,p);
        }
        return maxp;
    }
};