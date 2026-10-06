#include <bits/stdc++.h>
using namespace std;
vector<int> ans;
int pre = [](){
    const int n = 1e6;
    vector<bool> v(n + 1,true);
    for(int i = 2; i <= n;i++){
        if(v[i]){
            ans.push_back(i);
            for(long long a = (long long)i * i;a <= n;a += i) v[a] = false;
        }
    }
    return 0;
}();
class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        vector<vector<int>> a;
        a.push_back({-1,-1});
        int lb = lower_bound(ans.begin(),ans.end(),left) - ans.begin();
        int ub = upper_bound(ans.begin(),ans.end(),right) - ans.begin();
        int mn = INT_MAX;
        for(int i = lb; i < ub - 1; i++){
            int d = ans[i + 1] - ans[i];
            if(d < mn){
                mn = d;
                a[0] = {ans[i],ans[i + 1]};
            }
        }
        return a[0];
    }
};