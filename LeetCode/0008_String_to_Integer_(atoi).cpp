class Solution {
public:
    int myAtoi(string s){
        long long ans = 0;
        int i = 0;
        int n = s.size();
        bool f = 0;
        while(i < n && s[i] == ' ') i++;
        if(s[i] == '-'){
            f = 1;
            i++;
        }
        else if(s[i] == '+' ) i++;
        while(i < n && s[i] <= '9' && s[i] >= '0'){
            ans = ans * 10 + (s[i] - '0');
            if(ans > INT_MAX) break;
            i++;
        }
        if(f) ans = -ans;
        ans = min(ans,(long long)INT_MAX);
        ans = max(ans,(long long)INT_MIN);
        return (int) ans;    
        }
};