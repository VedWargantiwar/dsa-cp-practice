class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int low = 0,high = matrix.size()*matrix[0].size() - 1;
        while(low <= high){
            int mid = low + (high - low) / 2;
            int a = mid / matrix[0].size();
            int b = mid % matrix[0].size();
            if(matrix[a][b] == target) return 1;
            else if(matrix[a][b] > target) high = mid - 1;
            else low = mid + 1;
        }
        return 0;
    }
};