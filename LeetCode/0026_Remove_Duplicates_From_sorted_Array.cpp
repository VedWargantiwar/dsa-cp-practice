class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int low = 1, mid = 1;
        while(mid < nums.size()){
            if(nums[mid] != nums[(mid - 1)]) {nums[low] = nums[mid];low++;}
            mid++;
        }
        return low;
    }
};