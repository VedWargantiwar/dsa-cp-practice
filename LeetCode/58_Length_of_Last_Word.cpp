class Solution {
public:
    int lengthOfLastWord(string s) {
        int high = s.size() - 1;
        while(s[high] == ' ') high--;
        int n = high;
        while(high >= 0 && s[high] != ' ') high--;
        return n - high;
    }
};