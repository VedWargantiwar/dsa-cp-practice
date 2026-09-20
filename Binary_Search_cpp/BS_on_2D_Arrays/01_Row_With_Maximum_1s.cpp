class Solution {
  public:
    int rowWithMax1s(vector<vector<int>> &arr){
        int low = 0, high = arr[0].size() - 1;
        int ans = -1;
        int a = arr[0].size();
        for(int i = 0; i < arr.size();i++){
            int lb = lower_bound(arr[i].begin(),arr[i].end(),1) - arr[i].begin();
            if(a > lb){
                a = lb;
                ans = i;
            }
        }
        return ans;
    }
};

// wihtout stl
class Solution {
  public:
    int rowWithMax1s(vector<vector<int>> &arr){
        int ans = -1;
        int a = arr[0].size();
        for(int i = 0; i < arr.size();i++){
            int low = 0, high = arr[0].size();
            while(low < high){
                int mid = low + (high - low) / 2;
                if(arr[i][mid] == 1) high = mid;
                else low = mid + 1;
            }
            if(a > high){
                a = high;
                ans = i;
            }
        }
        return ans;
    }
};