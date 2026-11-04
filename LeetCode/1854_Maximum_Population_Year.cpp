class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        vector<int> v(2051,0);
        for(auto i : logs){
            v[i[0]]++;
            v[i[1]]--;
        }
        int y = 0;
        int mx = 0;
        int s = 0;
        for(int i = 1950; i < 2051;i++){
            s += v[i];
            if(s > mx){
                mx = s;
                y = i;
            }
        }
        return y;
    }
};