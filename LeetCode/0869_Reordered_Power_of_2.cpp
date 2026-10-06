#include <iostream> 
using namespace std;
vector<vector<int>> ans;
int pre = [](){
    int i = 1;
    ans.push_back({0,1,0,0,0,0,0,0,0,0});
    while(i < 1e9){
        vector<int> hash(10,0);
        i *= 2;
        int temp = i;
        while(temp > 0){
            int d = temp % 10;
            temp /= 10;
            hash[d]++;
        }
        ans.push_back(hash);
    }
    return 0;
}();
class Solution {
public:
    bool reorderedPowerOf2(int n) {
        vector<int> hash(10,0);
        while(n > 0){
            int d = n % 10;
            n /= 10;
            hash[d]++;
        }
        for(auto i : ans) if(i == hash) return true;
        return false;
    }
};