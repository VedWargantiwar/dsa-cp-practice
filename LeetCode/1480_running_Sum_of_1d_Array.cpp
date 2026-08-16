vector<int> runningSum(vector<int> &nums)
{
    int unit = 0;
    vector<int> v;
    for (int i = 0; i < nums.size(); i++)
    {
        unit += nums[i];
        v[i] = unit;
    }

    return v;
}