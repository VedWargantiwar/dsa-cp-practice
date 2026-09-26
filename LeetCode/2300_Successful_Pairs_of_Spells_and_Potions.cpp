class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        int n = spells.size(),m = potions.size();
        sort(potions.begin(),potions.end());
        vector<int> v(n,0);
        for(int i = 0;i < n;i++){
            int low = 0,high = m - 1;
            int ans = m;
            while(low <= high){
                long long mid = (long long) low + (high - low) / 2;
                if(potions[mid] * (long long)spells[i] >= success){ 
                    high = mid - 1;
                    ans = mid;
                }
                else low = mid + 1;
            }
            v[i] = m - ans;
        }
        return v;
    }
};