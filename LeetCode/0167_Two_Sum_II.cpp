class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int lowi = 0;
        int endi = numbers.size() - 1;
        while(lowi<endi){
            if(numbers[lowi] + numbers[endi] == target) return {lowi + 1, endi + 1};
            else if(numbers[lowi] + numbers[endi] < target) lowi++;
            else if(numbers[lowi] + numbers[endi] > target) endi--;
        }
        return {};
    }
};