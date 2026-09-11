class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int s = 0, ms = nums[0];
        int a = 0;
        int starti = 0;
        int endi = 0;
        for(int i = 0; i < nums.size();i++){
            s += nums[i];
            if(ms < s){
                ms = s;
                endi = i;
                starti = a;
            }
            if(s < 0){
                s = 0;
                a = i + 1;
            }
        }
        return ms;
    }
};