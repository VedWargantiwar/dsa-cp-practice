class Solution {
public:
    vector<vector<int>> filterOccupiedIntervals(vector<vector<int>>& v, int a, int b) {
        sort(v.begin(),v.end());
        int n = v.size();
        int low = 0;
        int mid = 1;
        while(mid < n){
            if(v[mid][0] - v[low][1] <= 1) v[low][1] = max(v[mid][1],v[low][1]);
            else{
                low++;
                v[low] = v[mid];
            }
            mid++;
        }
        v.resize(low + 1);
        vector<vector<int>> ans;
        for(int i = 0; i < v.size();i++){
            if(v[i][0] >= a && v[i][1] <= b) continue;
            else if(v[i][0] >= a && v[i][0] <= b) v[i][0] = b + 1;
            else if(v[i][1] <= b && v[i][1] >= a) v[i][1] = a - 1;
            else if(v[i][0] <= a && v[i][1] >= a && v[i][1] >= b){
                ans.push_back({v[i][0],a - 1});
                ans.push_back({b+ 1,v[i][1]});
                continue;
            }
            ans.push_back(v[i]);
        }
        return ans;
    }
};