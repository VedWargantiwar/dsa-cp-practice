class Solution {
public:
    int sum(int n){
        if(n <1) return 0;
        else return n%10 + sum(n/10);
    }
    int mult(int n){
        if(n <= 1) return 1;
        else return n%10 * mult(n/10);
    }
    int subtractProductAndSum(int n) {
        return mult(n)- sum(n) ;
    }
};