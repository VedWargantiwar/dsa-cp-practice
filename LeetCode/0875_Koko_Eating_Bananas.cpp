class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int high = 0;
        for(auto i : piles) high = max(high,i);
        int low = 0;
        while(low < high){
            int mid = low + (high - low) / 2;
            long long n = 0;
            if(mid == 0) return 1;
            for(auto i : piles){
                if(i % mid) n += (long long)((i / mid) + 1);
                else n += (long long) i / mid;
            }
            if(n <= h) high = mid;
            else low = mid + 1; 
        }
        return low;
    }
};