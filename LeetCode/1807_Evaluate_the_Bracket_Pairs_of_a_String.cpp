class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string,string> mpp;
        string ans;
        for(auto i : knowledge) mpp[i[0]] = i[1];
        int low = 0;
        while(low < s.size()){
            while(low < s.size() && s[low] != '(') ans.push_back(s[low++]);
            int mid = low + 1;
            string key;
            while(mid < s.size() && s[mid] != ')') key.push_back(s[mid++]);
            string topush;
            if(mpp.find(key) != mpp.end()) topush = mpp[key];
            else topush = '?';
            if(low < s.size()) ans.append(topush);
            low = mid + 1;
        }
        return ans;
    }
};