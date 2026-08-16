#include <iostream>
#include <vector>
using namespace std;

vector<int> getConcatenation(vector<int> &nums)
{
    vector<int> v;
    v.insert(v.begin(), nums.begin(), nums.end());
    v.insert(v.begin(), nums.begin(), nums.end());

    return v;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> b(5,100);
    cout<<getConcatenation(b);
    return 0;
}