class Solution {
public:
    void sortColors(vector<int>& nums) {
        int lowp = 0;
        int highp = nums.size() - 1;
        for(int i = 0; i < nums.size(); i++){
            if(i > highp) return;
            if(nums[i] == 0) {swap(nums[i],nums[lowp]);lowp++;}
            if(nums[i] == 2) {swap(nums[i],nums[highp]);highp--;i--;}
        }
    }
};