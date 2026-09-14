class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int low = 0;
        int mina = INT_MAX;
        int ans;
        while(low < n){
            int mid = low + 1;
            int high = n - 1;
            while(mid < high){
                int sum = nums[low] + nums[mid] + nums[high];
                if(sum > target) high--;
                else if (sum < target) mid++;
                else return target;
                int a = abs(target - sum);
                if(mina > a){
                    mina = a;
                    ans = sum;
                }
            }
            low++;
        }
        return ans;
    }
};  