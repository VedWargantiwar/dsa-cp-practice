class Solution {
public:
    int check(int a[], string& b){
        for(int i = 0; i < b.size(); i++){
            a[b[i] - 'a']--;
        }
        for(int i = 0; i < 26; i++){
            if(a[i] < 0) return 0;
        }
        return 1 + check(a,b);
    }
    int rearrangeCharacters(string s, string target) {
        int hash[26] = {0};
        for(int i = 0; i < s.size();i++){
            hash[s[i] - 'a']++;
        }
        return check(hash, target);
    }
};