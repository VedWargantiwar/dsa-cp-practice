#include <iostream> 
using namespace std;

void print(int a)
{
    if (a == 0)
    {
        return;
    }

    print(a - 1);

    cout<<a<<" ";
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
    
    print(n);

    return 0;
}