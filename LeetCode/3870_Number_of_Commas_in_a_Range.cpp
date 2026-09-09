class Solution {
public:
    int fun(int x){
        auto s = to_string(x);
        if(s.size() < 3) return 0;
        return (s.size() - 1) / 3;
    }
    int countCommas(int n) {
        int a = 0;
       for(int i = 1; i <= n; i++){
        a += fun(i);
       }
       return a;
    }
};