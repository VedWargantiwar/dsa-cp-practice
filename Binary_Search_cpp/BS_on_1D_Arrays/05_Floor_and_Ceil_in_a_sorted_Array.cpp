class Solution {
  public:
    int findFloor(vector<int>& arr, int x) {
        int i = upper_bound(arr.begin(),arr.end(),x) - arr.begin();
        if(i == arr.size()) return arr.size() - 1;
        else if(i == 0) return - 1;
        return i - 1;
    }
};

class Solution {
  public:
    int findCeil(vector<int>& arr, int x) {
        int i = lower_bound(arr.begin(),arr.end(),x ) - arr.begin();
        if(i == arr.size()) return -1;
        return i;
    }
};