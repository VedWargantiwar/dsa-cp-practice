class Solution {
public:
    char findTheDifference(string s, string t) {
        int hash[26] = {0};
        for(int i = 0; i < t.size(); i++){
            hash[t[i] - 'a']++;
        }
        for(int i = 0; i < s.size(); i++){
            hash[s[i] - 'a']--;
        }
        for(int i = 0; i < 26; i++){
            if(hash[i] == 1) return i + 'a';
        }
        return 1;
    }
};


// 5:08