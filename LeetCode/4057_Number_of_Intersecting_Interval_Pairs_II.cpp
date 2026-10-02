class Solution {
public:
    long long countIntersectingIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int n = intervals.size();
        long long counter = 0;
        for(int i = 0; i < n;i++){
            int low = i + 1,high = n - 1;
            int ans = i;
            while(low <= high){
                int mid = low + (high - low) / 2;
                int target = intervals[i][1];
                if(intervals[mid][0] > target) high = mid - 1;
                else{
                    ans = mid;
                    low = mid + 1;
                }
            }
            counter += (long long)(ans - i);
        }
        return counter;
    }
};