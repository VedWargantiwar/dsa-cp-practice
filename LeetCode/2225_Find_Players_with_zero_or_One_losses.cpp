class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        int hashw[100001] = {0};
        int hashl[100001] = {0};
        vector<int> answer0;
        vector<int> answer1;
        for(int i = 0; i < matches.size();i++){
            hashw[matches[i][0]]++;
            hashl[matches[i][1]]++;
        }
        for(int i = 0; i < 100001; i++){
            if(hashl[i] == 1) answer1.emplace_back(i);
            if(hashl[i] == 0 && hashw[i] != 0) answer0.emplace_back(i);
        }
        return {answer0, answer1};

    }
};