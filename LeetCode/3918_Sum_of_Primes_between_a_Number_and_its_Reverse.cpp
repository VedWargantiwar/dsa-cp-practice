class Solution {
public:
    int sumOfPrimesInRange(int n) {
        int a = 0;
        int temp = n;
        while(n >= 1){
            int d = n % 10;
            n /= 10;
            a = a*10 + d;
        }
        int sum = 0;
        for(int i = min(a,temp); i <= max(a,temp);i++){
            int c = 1;
            for(int b = 2; b*b <= i;b++){
                if(i % b == 0) {c = 0; break;}
            }
            if(c) sum += i;
        }
        if(min(a,temp) == 1) sum -= 1;
        return sum;
    }
};