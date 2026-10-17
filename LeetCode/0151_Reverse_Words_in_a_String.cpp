class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        int high = s.size() - 1;
        while(high >= 0){
            string d = "";
            while(high >= 0 && s[high] != ' ') d += s[high--];
            reverse(d.begin(),d.end());
            if(d != "") ans += d + " ";
            while(high >= 0 && s[high] == ' ') high--;
        }
        ans.pop_back();
        return ans;
    }
};