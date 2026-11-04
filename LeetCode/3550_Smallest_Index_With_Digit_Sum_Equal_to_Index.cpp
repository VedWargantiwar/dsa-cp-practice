class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for(int i = 0; i < nums.size();i++){
            int d = nums[i];
            int s = 0;
            while(d > 0){
                s += d % 10;
                d /= 10;
            }
            if(s == i) return i;
        }
        return -1;
    }
};