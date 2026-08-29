class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size(), low = 0, high = n - 1;
        int maxh = (n - 1)*min(height[0],height[n - 1]);
        while(low < high){
            int v = (high - low)*min(height[high],height[low]);
            maxh = max(maxh,v);
            if(height[high] >= height[low]) low++;
            else  high--;
        }
        return maxh;
    }
};