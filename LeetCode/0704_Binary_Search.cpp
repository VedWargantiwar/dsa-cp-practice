class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;
        while(low <= high){
            int mid = low + (high - low)/2;
            if(nums[mid] > target) high = mid - 1;
            else if(nums[mid] < target) low = mid + 1;
            else return mid;
        }
        return -1;
    }
};

// recursive implementation
class Solution {
public:
    int binary(vector<int>& v,int &target,int low,int high){
        if(low > high) return -1;
        int mid = low + (high - low) / 2;
        if(v[mid] < target) return binary(v,target,mid + 1,high);
        else if(v[mid] > target) return binary(v,target,low,mid - 1);
        else return mid;
    }
    int search(vector<int>& nums, int target) {
        return binary(nums,target,0,nums.size() - 1);
    }
};