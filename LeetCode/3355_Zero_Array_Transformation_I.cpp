class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int> v(nums.size() + 1,0);
        for(auto i : queries){
            v[i[0]]++;
            v[i[1] + 1]--;
        }
        int s = 0;
        for(int i = 0;i < nums.size();i++){
            s += v[i];
            if(s < nums[i]) return 0;
        }
        return 1;
    }
};