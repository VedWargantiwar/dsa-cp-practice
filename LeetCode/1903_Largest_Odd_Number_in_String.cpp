class Solution {
public:
    string largestOddNumber(string num) {
        int i = num.size() - 1;
        while(i >= 0 && (int)num[i] % 2 == 0) i--;
        num.resize(i + 1);
        return num;
    }
};