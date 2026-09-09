class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int low = 0;
        int ma = 0;
        while(low < nums.size()){
            int mid = low;
            int sum = 0;
            int a = 0;
            while(mid < nums.size()){
                sum += nums[mid];
                a++;
                if(sum == k) {ma = max(ma,a);break;}
                else if(sum > k) break;
                mid++;
            }
            low++;
        }
    }
};
// the above is a brute force.
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int low = 0, end = 0;
        int sum  = 0;
        int a = 0;
        while(end < nums.size()){
            sum += nums[end];
            while(sum > k && low <= end){
                sum -= nums[low];
                low++;
            }
            if(sum == k) a = max(a,end - low + 1);
            end++;
        }
        return a;
    }
};