// basically if you wanna find out the last digit in any base then modulo by that base(ex we do n%10 for getting last digits in a normal base).
// in this question its binary so we modulo by 2 and it gives the last digit as 0 or 1.
// to chop off the last digit in that base we divide by that base ex. we divide by 10 for normal one.
// in this question as its binary we divide by 2 to chop off last digit.

class Solution
{
public:
    int hammingWeight(int n)
    {

        if (n == 0)
        {
            return 0;
        }

        if (n % 2 == 1)
        {
            return 1 + hammingWeight(n / 2); // the 1 here can be replaced by n % 2 itself so this if else is not manadatory but works
        }
        else
        {
            return hammingWeight(n / 2);
        }
    }
};