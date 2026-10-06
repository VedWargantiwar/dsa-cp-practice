class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        int n = intervals.size();
        vector<int> v;
        vector<vector<int>> c(n,{0,0});
        for(int i = 0; i < n;i++){ 
            c[i][0] = intervals[i][0];
            c[i][1] = i;
        }
        sort(c.begin(),c.end());
        for(int i = 0; i < n;i++){
            int low = 0,high = n - 1;
            int ans = high + 1;
            int target = intervals[i][1];
            while(low <= high){
                int mid = low + (high - low) / 2;
                if(c[mid][0] >= target){
                    ans = c[mid][1];
                    high = mid - 1;
                }
                else low = mid + 1;
            }
            if(ans == n) v.emplace_back(-1);
            else v.emplace_back(ans);
        }
        return v;
    }
};