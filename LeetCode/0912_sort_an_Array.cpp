class Solution {
public:
    void merge(vector<int>& nums, int a, int b){
        vector<int> temp(b-a+1);
        int mid1 = (b + a)/2;
        int mid2 = (b + a)/2 + 1;
        int tempa = a;
        int i = 0;
        while(a <= mid1 && mid2 <= b){
            if(nums[a] < nums[mid2]) {temp[i] = nums[a];a++;}
            else {temp[i] = nums[mid2]; mid2++;} 
            i++;
        }
        while(mid2 <= b) {temp[i]= nums[mid2];i++;mid2++;}
        while(a <= mid1) {temp[i] = nums[a];i++;a++;}
        int z = 0;
        while(tempa <= b){
            nums[tempa] = temp[z];
            z++;
            tempa++;
        }

    }
    void divide(vector<int>& nums,int a,int b){
        if(b <= a) return;
        {divide(nums,a,(b + a)/2); divide(nums,(b + a + 2)/2,b);}
        merge(nums,a,b);
    }
    vector<int> sortArray(vector<int>& nums) {
        divide(nums,0,nums.size() - 1);
        return nums;
    }
};