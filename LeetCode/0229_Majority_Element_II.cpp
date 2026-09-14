class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int can1 = INT_MIN,can2 = INT_MIN,count1 = 0,count2 = 0;
        for(int i = 0; i < nums.size();i++){
            if(count1 == 0 && can2 != nums[i]) can1 = nums[i];
            else if(count2 == 0 && can1 != nums[i]) can2 = nums[i];
            if(can1 == nums[i]) count1++;
            else if(can2 == nums[i]) count2++;
            else {count1--;count2--;}
        }
        vector<int> ans;
        count1 = 0;
        count2 = 0;
        for(auto i : nums){
            if(can1 == i) count1++;
            else if(can2 == i) count2++;
        }
        if(3*count1 > nums.size()) ans.emplace_back(can1);
        if(3*count2 > nums.size()) ans.emplace_back(can2);
        return ans;
    }
};