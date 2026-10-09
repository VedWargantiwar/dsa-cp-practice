class Solution {
public:
    int minimumIndex(vector<int>& capacity, int itemSize) {
        int mi = -1;
        int mn = INT_MAX;
        for(int i = 0; i < capacity.size();i++){
            if(capacity[i] >= itemSize && capacity[i] < mn){
                mi = i;
                mn = capacity[i];
            }
        }
        return mi;
    }
};