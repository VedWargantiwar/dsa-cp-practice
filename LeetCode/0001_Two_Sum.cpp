class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int,int> mpp;
       int b = 0;
       for(int i = 0; i<nums.size();i++){
        mpp[nums[i]]++;
       }
       while(b< nums.size()){
         mpp[nums[b]]--;
         if(mpp[target - nums[b]] > 0) break;
         b++;
       }
       for(int i = 0; i < nums.size(); i++){
        if(nums[i] == target - nums[b] && i != b) return {i,b};
       }
       return {};
    }
};
// better method with one pass below.
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