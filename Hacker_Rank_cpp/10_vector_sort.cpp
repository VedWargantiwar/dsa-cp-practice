#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    vector<int> v(n);
    for(auto i = v.begin(); i != v.end();i++)
    {
        cin>>*(i);
    }
    
    sort(v.begin(),v.end());
    
    for(auto i = v.begin(); i != v.end();i++)
    {
        cout<<*(i)<<" ";
    }
    
    return 0;
}
