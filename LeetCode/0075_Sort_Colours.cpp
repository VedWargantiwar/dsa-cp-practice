// O(N^2) time, unoptimized brute-force thought in 3 mins
class Solution {
public:
    void sortColors(vector<int>& nums) {
        for(int i = 0; i < nums.size() - 1; i++){
            int mini = i;
            for(int a = i; a < nums.size();a++){
                if(nums[mini] > nums[a]) mini = a;
            }
            swap(nums[mini],nums[i]);
        }
    }
};
//  O(N) time, and O(1) space but its not a one pass cause its hash
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int hash[3] = {0};
        int a = 0;
        for(int i = 0; i < nums.size(); i++){
            hash[nums[i]]++;
        }
        for(int i = 0 ; i < 3; i++){
            while(hash[i]--){nums[a]=i;a++;}
        }
    }
};
// O(N) time, and O(1) space and its one pass called dutch national flag algorithm
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int lowp = 0;
        int highp = nums.size() - 1;
        for(int i = 0; i < nums.size(); i++){
            if(i > highp) return;
            if(nums[i] == 0) {swap(nums[i],nums[lowp]);lowp++;}
            if(nums[i] == 2) {swap(nums[i],nums[highp]);highp--;i--;}
        }
    }
};