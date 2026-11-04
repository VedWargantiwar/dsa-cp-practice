class Solution {
public:
    bool check(string &s,int a,int b){
        while(a <= b){
            if(s[a] != s[b]) return false;
            a++;
            b--;
        }
        return true;
    }
    string longestPalindrome(string s) {
        string ans;
        int mx = 0;
        for(int i = 0; i < s.size();i++){
            for(int a = i;a < s.size();a++){
                if(check(s,i,a) && mx < a - i + 1){
                    ans = s.substr(i,a - i + 1);
                    mx = a - i + 1;
                }
            }
        }
        return ans;
    }
};