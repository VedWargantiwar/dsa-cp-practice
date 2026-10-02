class Solution {
public:
    int solve(int n){
        int mn = INT_MAX;
        int mx = INT_MIN;
        while(n > 0){
            mn = min(mn,n % 10);
            mx = max(mx,n % 10);
            n /= 10;
        }
        return mx - mn;
    }
    int maxDigitRange(vector<int>& nums) {
        int sum = 0;
        int mx = INT_MIN;
        for(int i = 0; i < nums.size();i++){
            int d = solve(nums[i]);
            if(d > mx){
                sum = nums[i];
                mx = d;
            }
            else if (d == mx) sum += nums[i];
        }
        return sum;
    }
};