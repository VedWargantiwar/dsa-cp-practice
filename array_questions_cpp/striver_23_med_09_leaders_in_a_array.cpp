class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        int ma = INT_MIN;
        vector<int> v;
        for(int i = arr.size() - 1; i >= 0; i--){
            ma = max(ma,arr[i]);
            if(arr[i] == ma) v.emplace_back(arr[i]);
        }
        reverse(v.begin(),v.end());
        return v;
    }
};
