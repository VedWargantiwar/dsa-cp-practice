class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<int> v(10021,0);
        for(auto i : trips){
            v[i[1]] += i[0];
            v[i[2]] -= i[0];
        }
        long long s = 0;
        for(auto i : v){
            s += 1LL * i;
            if(s > capacity) return false;
        }
        return true;
    }
};