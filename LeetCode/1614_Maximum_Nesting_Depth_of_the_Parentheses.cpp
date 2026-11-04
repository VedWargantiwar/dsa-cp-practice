class Solution {
public:
    int maxDepth(string s) {
        int c = 0;
        int mx = 0;
        for(auto i : s){
            if(i == '(') c++;
            else if(i == ')') c--;
            mx = max(mx,c);
        }
        return mx;
    }
};