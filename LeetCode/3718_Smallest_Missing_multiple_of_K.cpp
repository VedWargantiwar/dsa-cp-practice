class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int hash[101] = {0};
        int n = 1;
        for(int i = 0; i < nums.size();i++){
            hash[nums[i]]++;
        }
        while(n*k <= 100){
            if(hash[n*k] == 0) return n*k;
            n++;
        }
        return n*k;
    }
};
