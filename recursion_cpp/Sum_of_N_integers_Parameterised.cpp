#include <iostream> 
using namespace std;

void print(int n, int a, int b)
{
    if (a > n)
    {
      cout<<b;
      return;
    }

    print(n, a + 1, b + a);
    
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;

    print(n,1,0);
    return 0;
}