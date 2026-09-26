class Solution {
  public:
    int findPages(vector<int> &arr, int k) {
        int n = arr.size();
        if(k > n) return -1;
        long long low = 0,high = 0;
        for(auto i : arr){ 
            high += i;
            low = max(low,(long long)i);
        }
        long long ans = 0;
        while(low <= high){
            long long mid = low + (high - low) / 2;
            int temp = 1;
            long long sum = 0;
            for(auto i : arr){
                if(sum + i > mid){
                    temp++;
                    sum = i;
                }
                else sum += i;
            }
            if(temp > k) low = mid + 1;
            else{
                high = mid - 1;
                ans = mid;
            }
        }
        return ans;
    }
};