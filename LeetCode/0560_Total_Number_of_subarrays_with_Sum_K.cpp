class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;
        int sum = 0, count = 0;
        mpp[0] = 1;
        for(int i = 0;i < nums.size();i++){
            sum += nums[i];
            auto a = mpp.find(sum - k);
            if(a != mpp.end()) count += a->second;
            mpp[sum]++;
        }
        return count;
    }
};