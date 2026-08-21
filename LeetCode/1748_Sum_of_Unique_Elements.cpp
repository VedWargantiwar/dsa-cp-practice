class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int hash[101] = {0};
        int sum = 0;
        for(int i = 0; i < nums.size();i++){
            hash[nums[i]]++;
        }
        for(int i = 0; i < 101; i++){
            if(hash[i] == 1) sum += i;
        }
        return sum;
    }
};

// 5:50