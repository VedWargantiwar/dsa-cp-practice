class Solution {
public:
    string removeOuterParentheses(string s) {
        int low = 0,high = 0;
        int r = 0;
        string ans = "";
        while(high < s.size()){
            if(s[high] == '(') r++;
            else r--;
            if(r == 0){
                for(int i = low + 1; i < high;i++) ans += s[i];
                low = high + 1;
                r = 0;
            }
            high++;
        }
        return ans;
    }
};