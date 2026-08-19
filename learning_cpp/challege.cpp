#include <iostream> 
#include <cmath>
using namespace std;
int num(int n, int a, int b)
{
    if(a < 1) return 0;
    else return (n%2)*pow(2,b) + num(n/2,a - 1, b+1);
    
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int a;
    cin>>n>>a;
    cout<<num(n,a,0);

    return 0;
}
