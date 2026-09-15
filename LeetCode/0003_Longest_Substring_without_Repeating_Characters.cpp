class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<int,int> mpp;
        int low = 0, high = 0;
        int longest = 0;
        while( low <= high && high < s.size()){
            mpp[s[high]]++;
            auto i = mpp.find(s[high]);
            while(i != mpp.end() && i->second > 1) mpp[s[low++]]--;
            longest = max(longest,high - low + 1);
            if(i == mpp.end() || i->second <= 1) high++;
        }
        return longest;
    }
};