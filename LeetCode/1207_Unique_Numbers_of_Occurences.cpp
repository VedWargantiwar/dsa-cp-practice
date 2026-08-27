class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> m;
        unordered_map<int,int> n;
        for(int i = 0; i < arr.size();i++){m[arr[i]]++;}
        for(auto i : m){n[i.second]++;}
        for(auto i: n){if(i.second != 1) return 0;}
        return 1;
    }
};