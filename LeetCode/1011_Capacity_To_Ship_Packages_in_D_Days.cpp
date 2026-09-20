class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low = INT_MIN;
        int high = 0;
        int ans = 0;
        for(auto i : weights){
            low = max(i,low);
            high += i;
        }
        while(low <= high){
            int mid = low + (high - low) / 2;
            int day = 1;
            int sum = 0;
            for(int i = 0; i < weights.size();i++){
                sum += weights[i];
                if(sum > mid){
                    sum = weights[i];
                    day++;
                }
                else if (i != weights.size() - 1 && sum == mid){
                    sum = 0;
                    day++;
                }
            }
            if(day <= days){ 
                high = mid - 1;
                ans = mid;
            }
            else low = mid + 1;
        }
        return low;
    }
};