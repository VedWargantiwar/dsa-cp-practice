class Solution {
public:
    int minZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int low = 0,high = queries.size();
        int ans = -1;
        while(low <= high){
            int mid = high - (high - low) / 2;
            vector<int> v(nums.size() + 1,0);
            for(int i = 0;i < mid;i++){
                v[queries[i][0]] += queries[i][2];
                v[queries[i][1] + 1] -= queries[i][2];
            }
            int s = 0;
            bool f = 1;
            for(int i = 0;i < nums.size();i++){
                s += v[i];
                if(s < nums[i]) f = 0;
            }
            if(f){
                ans = mid;
                high = mid - 1;
            }
            else low = mid + 1;
        }
        return ans;
    }
};