class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1,high = 0;
        for(auto i : nums) high = max(high,i);
        while(low < high){
            int mid = low + (high - low) / 2;
            long long n = 0;
            for(auto i : nums) n += (i + mid - 1) / mid;
            if(n <= threshold) high = mid;
            else low = mid + 1;
        }
        return low;
    }
};