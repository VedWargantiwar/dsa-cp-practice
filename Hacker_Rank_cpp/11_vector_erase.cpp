#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto i = v.begin(); i != v.end(); i++)
    {
        cin >> *(i);
    }

    int e;
    cin >> e;
    v.erase(v.begin() + e - 1);
    int x, z;
    cin >> x >> z;
    v.erase(v.begin() + x - 1, v.begin() + z - 1);
    cout << v.size() << '\n';
    for (auto i = v.begin(); i != v.end(); i++)
    {
        cout << *(i) << " ";
    }

    return 0;
}
