class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int,int> mpp;
       for(int i = 0; i < nums.size();i++){
         auto a = mpp.find(target - nums[i]);
         if(a != mpp.end()) return {i,(*a).second}
         mpp[nums[i]] = i;
       }
       return {};
    }
};  