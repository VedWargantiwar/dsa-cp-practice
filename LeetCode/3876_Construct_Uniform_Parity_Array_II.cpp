class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int mine = INT_MAX;
        int mino = INT_MAX;
        for(auto i : nums1){
            if(i % 2) mino = min(mino,i);
            else mine = min(mine,i);
        }
        int mn = min(mine,mino);
        for(auto i : nums1){
            if(mn % 2 != i % 2){
                if(i - mino < 1) return false;
            }
        }
        return true;
    }
};