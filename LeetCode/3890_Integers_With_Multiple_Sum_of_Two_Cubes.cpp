#include <bits/stdc++.h>
using namespace std;
vector<int> ans;
int pre = [](){
    unordered_map<int,int> mpp;
    for(int i = 1; i <= 1000;i++){
        for(int a = i;a <= 1000;a++){
            long long sum = (long long) i * i * i + a * a * a;
            if(sum > 1e9) break;
            mpp[sum]++;
        }
    }
    for(auto i : mpp) if(i.second > 1) ans.push_back(i.first);
    sort(ans.begin(),ans.end());
    return 0;
}();
class Solution {
public:
    vector<int> findGoodIntegers(int n) {
        vector<int> v;
        for(int i : ans){
            if(i <= n) v.push_back(i);
        }
        return v;
    }
};