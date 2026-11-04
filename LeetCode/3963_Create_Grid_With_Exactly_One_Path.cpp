class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> ans;
        for(int i = 0;i < m;i++){
            string s(n,'#');
            if(i != m - 1) s[0] = '.';
            else{
                string v(n,'.');
                s = v;
            }
            ans.push_back(s);
        }
        return ans;
    }
};