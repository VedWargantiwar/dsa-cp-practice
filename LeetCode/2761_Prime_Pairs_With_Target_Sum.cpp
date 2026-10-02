#include <iostream> 
using namespace std;
vector<int> prime;
int pre = [](){
    const int n = 1e6 + 1;
    vector<bool> v(n,true);
    for(int i = 2;i < v.size();i++){
        if(v[i]){ 
            prime.push_back(i);
            for(int a = i;a < v.size();a += i){
                v[a] = false;
            } 
        }
    }
    return 0;
}();
class Solution {
public:
    vector<vector<int>> findPrimePairs(int n) {
        vector<vector<int>> ans;
        int low = 0;
        int high = lower_bound(prime.begin(),prime.end(),n) - prime.begin() - 1;
        while(low <= high){
            if(prime[low] + prime[high] == n) ans.push_back({prime[low++],prime[high--]});
            else if(prime[low] + prime[high] > n) high--;
            else low++;
        }
        return ans;
    }
};