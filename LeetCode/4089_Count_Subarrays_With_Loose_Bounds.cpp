class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        int mn = INT_MAX;
        int mx = INT_MIN;
        long long s = 0;
        long long ans = 0;
        for(int i = 0; i < nums.size(); i++){
            mx = max(mx,nums[i]);
            mn = min(mn,nums[i]);
            if(mx > maxK || mn < minK){
                ans += s * ( s + 1) / 2;
                mx = INT_MIN;
                mn = INT_MAX;
                s = 0;
            }
            else s++;
        }
        ans += s * (s + 1) / 2;
        return ans;
    }
};