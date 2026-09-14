class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int i = n - 1;
        while(i >= 1){
            if(nums[i] > nums[i-1]) break;
            i--;
        }
        reverse(nums.begin() + i,nums.end());
        int a = i;
        if(i == 0) return;
        while(a < n){
            if(nums[i - 1] < nums[a]) break;
            a++;
        }
        swap(nums[i - 1],nums[a]);
    }
};