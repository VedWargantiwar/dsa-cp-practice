class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = strs[0];
        for(int i = 1 ; i < strs.size(); i++){
            if(ans == "") return "";
            int a = 0;
            while(a < ans.size() && ans[a] == strs[i][a]) a++;
            ans.resize(a);
        }
        return ans;
    }
};