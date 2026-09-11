class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int p = 0; 
        int mp = 0;
        for(int i = 1; i < prices.size();i++){
            p += prices[i] - prices[i - 1];
            mp = max(p,mp);
            if(p <= 0) p = 0;
        }
        return mp;
    }
};
