class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int i = 0, a = 1;
        while(a < intervals.size()){
            if(intervals[i][1] >= intervals[a][0]){
                intervals[i][1] = max(intervals[i][1], intervals[a][1]);
                a++;
            }
            else{
                i++;
                intervals[i] = intervals[a];
                a++;
            }
        }
        intervals.resize(i + 1);
        return intervals;
    }
};