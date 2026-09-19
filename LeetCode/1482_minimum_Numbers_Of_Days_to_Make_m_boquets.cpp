class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int high = 0;
        for(auto i : bloomDay) high = max(high,i);
        int mx = ++high;
        int low = 1;
        while(low < high){
            int mid = low + (high - low) / 2;
            int count = 0;
            int right = 0,left = 0;
            while(left < bloomDay.size()){
                int n = 0;
                if(mid >= bloomDay[left]) n = left - right + 1;
                else right = left + 1;
                if(n >= k){
                    count++;
                    right = left + 1;
                }
                left++;
            }
            if(count < m) low = mid + 1;
            else high = mid; 
        }
        if(high >= mx) return -1;
        else return high;
    }
};