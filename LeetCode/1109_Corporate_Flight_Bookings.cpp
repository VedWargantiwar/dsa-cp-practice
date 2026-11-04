class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int> v(n + 2,0);
        for(auto i : bookings){
            v[i[0]] += i[2];
            v[i[1] + 1] -= i[2];
        }
        vector<int> ans;
        int sum = 0;
        for(int i = 1; i <= n;i++){
            sum += v[i];
            ans.push_back(sum);
        }
        return ans;
    }
};