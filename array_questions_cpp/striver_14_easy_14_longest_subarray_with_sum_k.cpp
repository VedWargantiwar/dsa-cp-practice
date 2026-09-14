class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        int mcount = 0,sum = 0,count = 0;
        unordered_map<int,int> mpp;
        mpp[0] = -1;
        for(int i = 0; i < arr.size();i++){
            sum += arr[i];
            auto a = mpp.find(sum - k);
            if(a != mpp.end()) count = i - a->second;
            mcount = max(mcount,count);
            if(!mpp.count(sum)) mpp[sum] = i;
        }
        return mcount;
    }
};