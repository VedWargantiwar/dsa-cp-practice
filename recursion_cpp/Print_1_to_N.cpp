#include <iostream> 
using namespace std;

void print(int a, int b)
{
    cout<<b<<" ";
    
    if (b == a )
    {
        return;
    }
    
    print(a,b + 1);
    
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    int counter = 1;
    cin>>n;
    print(n,counter);

    return 0;
}