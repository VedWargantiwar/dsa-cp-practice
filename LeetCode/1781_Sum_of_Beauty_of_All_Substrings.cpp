class Solution {
public:
    int beautySum(string s) {
        int sum = 0;
        for(int i = 0; i < s.size();i++){
            vector<int> v(26,0);
            int mx = 0;
            for(int a = i; a < s.size();a++){
                v[s[a] - 'a']++;
                mx = max(mx,v[s[a] - 'a']);
                int mn = INT_MAX;
                for(auto i : v) if(i > 0) mn = min(i,mn);
                if(mn < INT_MAX) sum += mx - mn;
            }
        }
        return sum;
    }
};