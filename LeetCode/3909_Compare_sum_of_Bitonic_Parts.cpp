class Solution {
public:
    int compareBitonicSums(vector<int>& nums) {
        long long sum = 0;
        int ma = 0;
        for(int i = 0; i < nums.size();i++){
            ma = max(nums[i],ma);
            if(ma > nums[i]) sum -= nums[i];
            else sum += nums[i];
        }
        sum -= ma;
        if(sum > 0) return 0;
        else if(sum < 0) return 1;
        else return -1;
    }
};