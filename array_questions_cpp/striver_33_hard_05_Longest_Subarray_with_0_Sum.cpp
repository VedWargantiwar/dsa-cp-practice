class Solution {
  public:
    int maxLength(vector<int>& arr) {
        unordered_map<int,int> mpp;
        mpp[0] = -1;
        int sum = 0;
        int ml = 0;
        for(int i = 0; i < arr.size();i++){
            sum += arr[i];
            int l = 0;
            auto a = mpp.find(sum);
            if(a != mpp.end()) l = i - a->second;
            ml = max(ml,l);
            if(a == mpp.end()) mpp[sum] = i;
        }
        return ml;
    }
};