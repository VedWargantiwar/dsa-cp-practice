class Solution
{
public:
    int findGCD(vector<int> &nums)
    {
        int a, b;

        a = nums[0];
        b = a;

        for (auto i = 0; i < nums.size(); i++)
        {
            if (a < nums[i])
            {
                a = nums[i];
            }
            if (b > nums[i])
            {
                b = nums[i];
            }
        }

        while (a > 0 && b > 0)
        {
            if (a > b)
            {
                a = a % b;
            }
            else
            {
                b = b % a;
            }

        }

        if (a == 0)
        {
            return b;
        }

        return a;
    }
};