class Solution {
public:
    double myPow(double x, int n) {
        if(n >= 0) 
        {
            if(n == 0) return 1;
            else if(n / 2 >= 1)
            {
                if(n % 2 == 0)
                { 
                    int b = myPow(x, n/2);
                    return x*b*b;
                }
                else 
                {
                    int b = myPow(x, (n +1)/2)
                    return b*b;
                }
            }
            else return x*myPow(x, n - 1);
        }
        else
        {
            if(n == 0) return 1;
            else if(n / 2 <= -1)
            {
                if(n % 2 == 0)
                { 
                    int b = myPow(x, n/2);
                    return b*b/x;
                }
                else 
                {
                    int b = myPow(x, (n - 1)/2)
                    return b*b;
                }
            }
            else return x*myPow(x, n + 1);
        }
    }
};