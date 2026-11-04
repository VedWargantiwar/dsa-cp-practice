class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        vector<int> v(s.size() + 1,0);
        for(auto i : shifts){
            v[i[0]] += (i[2] == 1 ? 1 : -1);
            v[i[1] + 1] -= (i[2] == 1 ? 1 : -1);
        }
        int sum = 0;
        for(int i = 0;i < s.size();i++){
            sum += v[i];
            s[i] = 'a' + ((s[i] + sum - 'a') % 26 + 26) % 26;
        }
        return s;
    }
};