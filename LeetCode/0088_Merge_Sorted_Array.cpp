class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int a = m - 1, b = n - 1,mid = m + n - 1;
        while(mid >= a && a >= 0 && b >= 0){
            if(nums1[a] < nums2[b]){
                nums1[mid] = nums2[b];
                b--;
            }
            else{
                nums1[mid] = nums1[a];
                a--;
            }
            mid--;
        }
        while(b >= 0){
            nums1[mid] = nums2[b];
            mid--;
            b--;
        }
    }
};