class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s == goal) return true;
        for(int i = 0;i <= s.size();i++){
            reverse(s.begin(),s.begin() + 1);
            reverse(s.begin()+1,s.end());
            reverse(s.begin(),s.end());
            if(s == goal) return true;
        }
        return false;
    }
};

// BETTER SOLUTION

class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size() != goal.size()) return false;
        s += s;
        if(s.find(goal) != string::npos) return true;
        return false;
    }
};