#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<map>
#include <unordered_map>
using namespace std;


int main() {
    unordered_map<string,int> mpp;
    int q;
    cin>>q;
    while(q--){
        int a, number;
        string b;
        cin>>a;
        if(a == 1){cin>>b>>number;mpp[b] += number;}
        else if(a == 2) {cin>>b; mpp[b] =0;}
        else {cin>>b;cout<<mpp[b]<<'\n';}
    }
    return 0;
}
