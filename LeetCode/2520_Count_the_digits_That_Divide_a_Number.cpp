class Solution {
public:
    int check(int num, int n){
        if(n < 1) return 0;
        else if(num % (n%10) == 0) return 1 + check(num, n/10);
        else return 0 + check(num , n/10);
    }
    int countDigits(int num) {
        check(num,num);
    }
};