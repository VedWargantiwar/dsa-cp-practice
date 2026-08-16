#include <iostream> 
#include <vector> 
using namespace std;

void printvector(vector<int> &v)
{
    for (int i = 0; i < v.size() ; i++)
    {
        cout<<v[i]<<" ";
    }
    
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> arr;

    for (int i = 1; i <= 5; i++)
    {
       arr.push_back(i);
    }

    printvector(arr);
    
    return 0;
}