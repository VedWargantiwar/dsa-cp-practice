class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        if(mat == target) return 1;
        int n = mat.size();
        int b = 3;
        while(b--){
            for(int i = 0; i <n; i++){
                for(int a = i; a < n; a++)
                swap(mat[a][i],mat[i][a]);
            }
            reverse(mat.begin(),mat.end());
            if(mat == target) return 1;
        }
        return 0;
    }
};