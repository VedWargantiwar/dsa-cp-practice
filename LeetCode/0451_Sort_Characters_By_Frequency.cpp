class Solution {
public:
    string frequencySort(string s) {
        vector<int> hash(129,0);
        vector<vector<char>> bucket(s.size()+1);
        for(auto i : s) hash[i]++;
        for(int i = 0; i <= 128;i++) if(hash[i] > 0) bucket[hash[i]].push_back(i);
        int low = 0;
        for(int i = s.size(); i > 0;i--){
            while(!(bucket[i].empty())){
                s.replace(low,i,i,bucket[i].back());
                bucket[i].pop_back();
                low += i;
            }
        }
        return s;
    }
};

// the above one is a bucket sort and the below is done by parining the indexes and then sorting by frequency


class Solution {
public:
    string frequencySort(string s) {
        vector<pair<int,char>> hash(126,{0,0});
        for(auto i : s){
            hash[i].first++;
            hash[i].second = i;
        }
        sort(hash.rbegin(),hash.rend());
        string ans = "";
        for(int i = 0; i < 126;i++){
            while(hash[i].first > 0){ 
                ans += hash[i].second;
                hash[i].first--;
            }
        }
        return ans;
    }
};