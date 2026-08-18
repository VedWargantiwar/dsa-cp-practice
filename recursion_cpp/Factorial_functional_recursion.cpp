#include <iostream>
using namespace std;

int factorial(int a)
{
    if (a <= 1)
    {
        return 1;
    }

    return (a * factorial(a - 1));
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;

    cout << factorial(n);

    return 0;
}