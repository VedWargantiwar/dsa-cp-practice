class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.size() != word2.size()) return 0;
        vector<int> hash1(26,0);
        vector<int> hash2(26,0);
        for(int i = 0; i < word1.size(); i++ ){
            hash1[word1[i] - 'a']++;
            hash2[word2[i] - 'a']++;
        }
        for(int i = 0; i < 26; i++){
            if(hash1[i] != 0 && hash2[i] == 0) return 0; 
            if(hash2[i] != 0 && hash1[i] == 0) return 0; 
        }
        sort(hash1.begin(),hash1.end());
        sort(hash2.begin(),hash2.end());
        for(int i = 0; i < 26; i++){
            if(hash1[i] != hash2[i]) return 0;
        }
        return 1;
    }
};