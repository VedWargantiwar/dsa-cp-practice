class Solution {
public:
    bool check(string s, int hash[], string pattern){
        int hash1[26] = {0};
        for(int i = 0; i < s.size(); i++){
            hash[s[i] - 'a']++;
        }
        string temp = s;
        for(int i = 0; i < pattern.size();i++){
            for(int a = 0; a < s.size();a++){
                if(hash[pattern[i] - 'a'] == hash1[s[a]- 'a'] && hash[pattern[i] - 'a'] != 0 ) {temp[a] = pattern[i]; break;}
            }
        }
        if( temp == pattern) return 1;
        return 0;

    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        int hash[26] = {0};
        for(int i = 0; i < pattern.size(); i++){
            hash[pattern[i] - 'a']++;
        }
        vector<string> ans;
        for(int i = 0 ; i < words.size(); i++){
            if(check(words[i],hash,pattern)) ans.emplace_back(words[i]);
        }
        return ans;

    }
};