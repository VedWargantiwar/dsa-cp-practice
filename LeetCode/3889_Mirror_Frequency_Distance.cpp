class Solution {
public:
    int mirrorFrequency(string s) {
        vector<int> hash(256,0);
        for(auto i : s){
            if(i >= 'a' && i <= 'm') hash[i]++;
            else if(i > 'm' && i <= 'z') hash['z' + 'a' - i]--;
            else if('0' <= i && i <= '4') hash[i]++;
            else if('4' < i && i <= '9') hash['9' + '0' - i]--;
        }
        int sum = 0;
        for(int i = 0; i < 256;i++){
            sum += abs(hash[i]);
        }
        return sum;
    }
};