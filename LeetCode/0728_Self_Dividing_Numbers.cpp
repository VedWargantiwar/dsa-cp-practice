class Solution {
public:
    bool checker(int i, int n){
        if(n <= 1) return 1;
        if(n%10 == 0) return 0;
        if(i % (n%10) != 0) return 0;
        return checker(i,n/10);
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i = left; i <= right;i++){
            if(checker(i,i)) ans.emplace_back(i);
        }
        return ans;
    }
};