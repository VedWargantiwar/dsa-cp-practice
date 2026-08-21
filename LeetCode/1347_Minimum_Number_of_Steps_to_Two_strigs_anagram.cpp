class Solution {
public:
    int minSteps(string s, string t) {
        int hash[26] = {0};
        int sum = 0;
        for(int i = 0; i < s.size(); i++){
            hash[s[i] - 'a']++;
        }
        for(int i = 0; i < t.size(); i++){
            hash[t[i] - 'a']--;
        }
        for(int i = 0; i < 26;i++){
            if(hash[i] > 0) sum += hash[i];
        }
        return sum;
    }
};

// 5:46 [medium]