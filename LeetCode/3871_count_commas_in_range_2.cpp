class Solution {
public:
    long long countCommas(long long n) {
        long long a = 0;
        for(long long i = 1e15; i >= 1e3; i /= 1e3){
            if(n >= i){
                a += n - i + 1;
            }
        }
        return a;
    }
};