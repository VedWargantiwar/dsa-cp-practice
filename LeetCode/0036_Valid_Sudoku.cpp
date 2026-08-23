class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        array<array<int,12>,27> hash{};
        for(int i = 0; i < 9; i++){
            for(int a = 0; a < 9; a++ ){
               hash[i][board[i][a] - '.']++;
            }
             for(int a = 0; a < 9; a++ ){
               hash[9 + i][board[a][i] - '.']++;
            }
        }
        for(int b = 0; b < 3; b++){
            for(int i = 0; i < 3; i++){
                for(int a = 0; a < 3; a++){
                    for(int d = 0; d < 3; d++){
                        hash[18 + i + 3*b][board[d + 3*b][3*i + a]- '.']++;
                    }
                }
            }
        }
        for(int i = 0; i < 27; i++){
            for(int a = 1 ; a <12; a++ ){
                if(hash[i][a] > 1) return 0;
            }
        }
        return 1;
         

    }
};