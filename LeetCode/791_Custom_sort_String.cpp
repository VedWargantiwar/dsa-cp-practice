class Solution {
public:
    string customSortString(string order, string s) {
       map<char, int> hashm;
       string ans;
       for(int i = 0 ; i < order.size();i++){
        hashm[order[i]]++;
       }
       for(int i = 0 ; i < s.size();i++){
        hashm[s[i]]--;
       }
       for(int i = hash.begin(); i < hash.end();i++){
        if(i.second < 1) {ans.push_back(i.first); i--}
       }
       return ans;
    }
};