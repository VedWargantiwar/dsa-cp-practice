class Solution {
public:
    
    bool check(int i, vector<char>& s) {
     if(i >= s.size()/2 ) return 1;
     else if(s[i] != s[s.size()- i - 1]) return 0;
     else return check(i + 1,s);
    }
    bool isPalindrome(vector<char>& s) {
        return check(0, s);
    }
};