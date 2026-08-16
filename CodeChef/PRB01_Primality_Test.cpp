#include <bits/stdc++.h>
using namespace std;

bool primechecker(int a)
{
    bool returnvalue = 1; // if its prime then a value 1 will be returned
    if (a == 1)
    {
        returnvalue = 0;
    }
    else
    {
        for (int i = 2; i * i <= a; i++)
        {
            if (a % i == 0)
            {
                returnvalue = 0; // if its not prime then a value 0 will be returned
                break;
            }
        }
    }
    return returnvalue;
}

int main()
{
    int t;
    cin >> t;
    vector<int> v(t);

    for (auto i = v.begin(); i != v.end(); i++)
    {
        cin >> *(i);
    }

    cout << boolalpha;
    for (int i = 0; i < t; i++)
    {
        if (primechecker(v[i]))
        {
            cout << "yes" << '\n';
        }
        else
        {
            cout << "no" << '\n';
        }
    }
}

