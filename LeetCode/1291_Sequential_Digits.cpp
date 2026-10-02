#include <bits/stdc++.h>
using namespace std;
vector<int> ans;
int pre = [](){
    for(int i = 1; i <= 9;i++){
        long long d = i;
        for(int a = i + 1; a <= 9;a++){
            d = (long long)d*10 + a;
            if(d > 1e9) break;
            ans.push_back(d);
        }
    }
    sort(ans.begin(),ans.end());
    return 0;
}();
class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> v;
        for(auto i : ans) if(low <= i && i <= high) v.push_back(i);
        return v;
    }
};