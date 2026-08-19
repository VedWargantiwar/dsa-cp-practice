class Solution {
public:
    int digisum(int n) {
        if(n < 1) return 0;
        else return n%10 + digisum(n/10);
    }
    int addDigits(int num) {
        if(num < 10) return num;
        else return addDigits(digisum(num));
    }
};