class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int> m;
        int highest_count = 0;
        for(int i = 0; i < nums.size();i++){
            m[nums[i]]++;
        }
        for(auto i : m){
            if(!(m.count(i.first - 1))) {
                int count = 0;
                for( int a = 0; true; a++){
                    if(!m.count(i.first + a))  break;
                    count++;
                }
                highest_count=max(count,highest_count);
            }
        }
        return highest_count;
    }
};