class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int m = grid[0].size();
        int n = grid.size();
        int s = 0;
        int c = m - 1,r = 0;
        while(r < n){
            while(c >= 0){
                if(grid[r][c] < 0){ 
                    c--;
                    s += n - r;
                }
                else break;
            }
            r++;
        }
        return s;
    }
};