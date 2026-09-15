#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int f,s,fc;
    cin>>f>>s>>fc;
    cout<<min(12*f,12*s + fc);
    return 0;
}