class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for(int i = 0; i < n/2 ; i++){
            for(int a = 0; a<n-2*i-1;a++){
                swap(matrix[n-i-a-1][n-i-1],matrix[n-i-1][i+a]);
                swap(matrix[n-i-a-1][n-i-1],matrix[i][n-i-a-1]);
                swap(matrix[i][n-i-a-1],matrix [i+a][i]);
            }
        }
    }
};