#include <iostream> 
using namespace std;

void max_finder(int,int,int,int);

int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    max_finder(a,b,c,d);

    return 0;
}

void max_finder(int a, int b, int c, int d)
{
    int array[4] = {a,b,c,d};
    int largest = a;

    for (int i = 1; i < 4; i++)
    {
        if (largest < array[i])
        {
          largest = array[i];
        }
        
    }

    cout<<largest;
    

}