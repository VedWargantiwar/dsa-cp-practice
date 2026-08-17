class Solution
{
public:
    bool isPalindrome(int x)
    {
        long long n;
        long long temp = x;
        long long newn = 0;

        if (x < 0)
        {
            return 0;
        }
        else
        {
            while (x > 0)
            {
                n = x % 10;
                x /= 10;
                newn = newn*10 + n;
            }

            if (newn == temp)
            {
               return 1;
            }
            else
            {
                return 0;
            }
            
        }
    }
};