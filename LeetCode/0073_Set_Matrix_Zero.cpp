class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int col[200] = {0};
        for(int a = 0; a < matrix.size();a++){
            int counter = 0;
            for(int b = 0; b < matrix[0].size();b++){
                if(matrix[a][b] == 0) {counter++;col[b]++;}
            }
            if(counter > 0){
                for(int b = 0; b < matrix[0].size();b++)
                matrix[a][b] = 0;
            }
        }
        for(int i = 0; i < matrix[0].size(); i++){
            if(col[i] > 0){
                for(int a = 0; a < matrix.size();a++)
                matrix[a][i] = 0;
            }
        }
    }
};