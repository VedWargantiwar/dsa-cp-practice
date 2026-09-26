class Solution {
  public:
    double minMaxDist(vector<int> &stations, int k) {
        long double low = 0,high = 0;
        for(int i = 1; i < stations.size();i++) high = max(high,(long double)stations[i] - stations[i - 1]);
        long double ans;
        while(1e-6 + low < high){
            long double mid = (low + (high - low) / 2.0);
            int counter = 0;
            for(int i = 1; i < stations.size();i++){
                int d = stations[i] - stations[i - 1];
                if(d > mid){
                    counter += (int)d / mid;
                }
            }
            if(counter > k) low = mid;
            else{
                ans = mid;
                high = mid;
            }
        }
        return ans;
    }
};