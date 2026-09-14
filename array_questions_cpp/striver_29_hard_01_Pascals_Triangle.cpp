class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans = {{1}};
        for(int i = 1;i < numRows;i++){
            vector<int> b;
            for(int a = 0; a <=  i;a++){
                if(a == 0 || a == i) b.emplace_back(1);
                else b.emplace_back(ans[i - 1][a] + ans[i - 1][a - 1]);
            }
            ans.emplace_back(b);
        }
        return ans;
    }
};