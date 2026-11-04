class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> mpp = {
            {'V',5},
            {'I',1},
            {'X',10},
            {'L',50},
            {'C',100},
            {'D',500},
            {'M',1000}
        };
        if(s.size() == 1) return mpp[s[0]];
        long long sum = 0;
        for(int i = 0; i < s.size() - 1;i++){
            if(mpp[s[i]] >= mpp[s[i + 1]]) sum += mpp[s[i]];
            else{
                sum += mpp[s[i + 1]] - mpp[s[i]];
                i++;
            }
        }
        if(mpp[s[s.size() - 1]] <= mpp[s[s.size() - 2]]) sum += mpp[s[s.size() - 1]]; 
        return sum;
    }
};