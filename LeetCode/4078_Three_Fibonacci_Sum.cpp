#include <iostream> 
using namespace std;
    vector<int> v;
    int pre = [](){
        v.push_back(0);
        v.push_back(1);
        const int n = 1e9;
        for(int i = 1,d = 1; d <= n;i++){
            d = v[i] + v[i - 1];
            v.push_back(d);
        }
        return 0;
    }();
class Solution {
public:

    bool threeFibonacciSum(int n) {
        if(n % 2) return false;
        n /= 2;
        return upper_bound(v.begin(),v.end(),n) - lower_bound(v.begin(),v.end(),n);
    }
};