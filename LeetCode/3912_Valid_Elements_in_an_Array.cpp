class Solution {
public:
    vector<int> findValidElements(vector<int>& nums) {
        vector<int> v(nums.size(),0);
        vector<int> ans;
        int mx = 0;
        for(int i = nums.size() - 1; i >= 0;i--){
            v[i] = mx;
            mx = max(mx,nums[i]);
        }
        mx = 0;
        for(int i = 0; i < nums.size();i++){
            if(nums[i] > mx || nums[i] > v[i]) ans.push_back(nums[i]);
            mx = max(mx,nums[i]);
        }
        return ans;
    }
};