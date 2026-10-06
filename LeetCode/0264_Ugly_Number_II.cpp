#include <iostream> 
using namespace std;
vector<int> ans;
int pre = [](){
    for(long long i = 1; i < INT_MAX;i*=2){
        for(long long j = i; j < INT_MAX;j*=3){
            for(long long k = j; k < INT_MAX;k*=5){
                ans.push_back(k);
            }
        }
    }
    sort(ans.begin(),ans.end());
    return 0;
}();
class Solution {
public:
    int nthUglyNumber(int n) {
        return ans[n - 1];
    }
};