class Solution {
  public:
    int nthRoot(int n, int m) {
        int low = 0,high = m;
        while(low <= high){
            int mid = low + (high - low) / 2;
            long long x = 1;
            for(int i = 0;i < n;i++) x *= (long long)mid;
            if(x == m) return mid;
            else if(x > m) high = mid - 1;
            else low = mid + 1;
        }
        return -1;
    }
};

// the actual correct solution is underneath
class Solution {
  public:
    int nthRoot(int n, int m) {
        int low = 0,high = m;
        while(low <= high){
            int mid = low + (high - low) / 2;
            long long x = 1;
            for(int i = 0;i < n;i++){ 
                x *= (long long)mid;
                if(x > m) break;
            }
            if(x == m) return mid;
            else if(x > m) high = mid - 1;
            else low = mid + 1;
        }
        return -1;
    }
};