class Solution {
public:
    int hIndex(vector<int>& citations) {
        int low = 0,high = min((int)citations.size(),citations[citations.size() - 1]);
        int ans = 0;
        while(low <= high){
            int mid = low + (high - low) / 2;
            int counter = 0;
            for(auto i : citations) if(i >= mid) counter++;
            if(counter >= mid){
                ans = mid;
                low = mid + 1;
            }
            else high = mid - 1;
        }
        return ans;
    }
};