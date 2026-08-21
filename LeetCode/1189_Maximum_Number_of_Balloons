class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int hash[26] = {0};
        for(int i = 0; i < text.size();i++){
            hash[text[i] - 'a']++;
        }
        return min({hash[1],hash[0],hash[11]/2,hash[14]/2,hash[13]});
    }
};