class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        for(int i = 0; i < 2;i++){
            for(int a = 0; a < 2;a++){
                if(edges[0][i] == edges[1][a]) return edges[0][i];
            }
        }
        return 0;
    }
};