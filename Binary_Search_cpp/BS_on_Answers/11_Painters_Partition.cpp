class Solution {
  public:
    int minTime(vector<int>& arr, int k) {
        int n = arr.size();
        int low = 0,high = 0;
        for(auto i : arr){
            high += i;
            low = max(low,i);
        }
        int ans;
        while(low <= high){
            int mid = low + (high - low) / 2;
            int sum = 0;
            int painter = 1;
            for(auto i : arr){
                if(sum + i > mid){
                    painter++;
                    sum = i;
                }
                else sum += i;
            }
            if(painter > k) low = mid + 1;
            else{
                ans = mid;
                high = mid - 1;
            }
        }
        return ans;
    }
};