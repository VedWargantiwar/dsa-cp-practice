class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> mpp;
        for(int i = 0; i < s.size();i++){
            auto a = mpp.find(s[i]);
            if(a != mpp.end() && a->second != t[i]) return false;
            else if(a == mpp.end()) mpp[s[i]] = t[i];
        }
        mpp.clear();
        for(int i = 0; i < s.size();i++){
            auto a = mpp.find(t[i]);
            if(a != mpp.end() && a->second != s[i]) return false;
            else if(a == mpp.end()) mpp[t[i]] = s[i];
        }
        return true;
    }
};