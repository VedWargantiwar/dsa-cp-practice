class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;
        while(low <= high){
            int mid = low + (high - low)/2;
            if(target == nums[mid]) return mid;
            if(nums[low] <= nums[mid] && nums[mid] <= nums[high]){
                if(target > nums[mid]) low = mid + 1;
                else if(target < nums[mid]) high = mid - 1;
                else return mid;
            }
            else if(nums[low] >= nums[mid] && nums[mid] <= nums[high]){
                if(target < nums[mid]) high = mid - 1;
                else if(target > nums[mid] && target < nums[high]) low = mid + 1;
                else if(target > nums[high]) high = mid - 1;
                else return high;
            }
            else if(nums[low] <= nums[mid] && nums[mid] >= nums[high]){
                if(target > nums[mid]) low = mid + 1;
                else if(target < nums[mid] && target > nums[low]) high = mid - 1;
                else if(target < nums[low]) low = mid + 1;
                else return low;
            }
        }
        return -1;
    }
};

// the below is a better version i made after understanding that i have to find the sorted region and if-
// -the element is in the sorted region then throw away the unsorted part and if its not there then throw away the sorted part.
// in this question you find the sorted region by comaparing the mid with high and low.
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;
        while(low <= high){
            int mid = low + (high - low) / 2;
            if(target == nums[mid]) return mid;
            else if(nums[mid] >= nums[low]){
                if(target >= nums[low] && target < nums[mid]) high = mid - 1;
                else low = mid + 1; 
            }
            else if(nums[mid] <= nums[high]){
                if(target > nums[mid] && target <= nums[high]) low =  mid + 1;
                else high = mid - 1;
            }
        }
        return -1;
    }
};