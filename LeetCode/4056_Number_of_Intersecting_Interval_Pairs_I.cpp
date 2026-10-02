class Solution {
public:
    int countIntersectingIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int count = 0;
        int n = intervals.size();
        for(int i = 0; i < n;i++){
            for(int a = i + 1; a < n;a++){
                if(!(intervals[a][0] > intervals[i][1])) count++;
            }
        }
        return count;
    }
};