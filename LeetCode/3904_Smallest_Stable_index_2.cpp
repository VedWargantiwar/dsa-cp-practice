class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        int arr[n];
        int mi = 1e9;
        for(int i = n - 1; i >= 0;i--){
            mi = min(nums[i],mi);
            arr[i] = mi;
        }
        int ma = 0;
        for(int i = 0; i < n; i++){
            ma = max(ma,nums[i]);
            int s = ma - arr[i];
            if(s <= k) return i;
        }
        return -1;
    }
}