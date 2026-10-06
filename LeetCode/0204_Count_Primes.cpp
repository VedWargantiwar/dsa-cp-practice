#include <iostream> 
using namespace std;
vector<int> prime;
int pre = [](){
    vector<bool> v(5 * 1e6,true);
    for(int i = 2; i < v.size();i++){
        if(v[i]){ 
            prime.push_back(i);
            for(int a = 2;a * i < v.size();a++) v[i * a] = false;
        }
    }
    return 0;
}();
class Solution {
public:
    int countPrimes(int n) {
       int lb = lower_bound(prime.begin(),prime.end(),n) - prime.begin();
       return lb; 
    }
};