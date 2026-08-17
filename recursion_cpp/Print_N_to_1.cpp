#include <iostream> 
using namespace std;

void print(int b)
{
    if (b == 0)
    {
       return;
    }
    
    cout<<b<<" ";

    print(b - 1);

}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    int counter = n ;
    print(counter);
    
    return 0;
}