class Solution {
public:
    int vowelConsonantScore(string s) {
        int v = 0;
        int c = 0;
        for(auto i : s){
            if(i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u') v++;
            else if(i == ' ' || i == '1' || i == '2'|| i == '3'|| i == '4'|| i == '5'|| i == '6'|| i == '7'|| i == '8'|| i == '9'|| i == '0') {}
            else c++;
        }
        if(c > 0) return v/c;
        return 0;
    }
};