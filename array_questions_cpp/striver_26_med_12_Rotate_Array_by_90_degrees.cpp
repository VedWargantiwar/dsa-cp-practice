class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        for(int i = 0; i < matrix.size(); i++){
            for(int a = i; a < matrix.size();a++){
                swap(matrix[a][i] , matrix[i][a]);
            }
        }
        for(int i = 0; i < matrix.size(); i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};