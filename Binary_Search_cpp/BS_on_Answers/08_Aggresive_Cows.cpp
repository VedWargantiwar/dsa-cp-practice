class Solution {
  public:
    int aggressiveCows(vector<int> &arr, int k) {
        sort(arr.begin(),arr.end());
        int n = arr.size();
        int low = 1,high = arr[n - 1] - arr[0];
        int temp = k;
        int ans;
        while(low <= high){
            k = temp;
            int mid = low + (high - low) / 2;
            int left = 0;
            int right = 1;
            k--;
            while(k >= 1 && right < n){
                if(arr[right] - arr[left] >= mid){
                    k--;
                    left = right;
                }
                right++;
            }
            if(k > 0) high = mid - 1;
            else{ 
                low = mid + 1;
                ans = mid;
            }
        }
        return ans;
    }
};