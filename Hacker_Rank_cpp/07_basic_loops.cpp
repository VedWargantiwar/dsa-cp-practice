#include <iostream> 
using namespace std;

int main()
{
    int index;
    cin>>index;
    int array[index];

    int i = 0;
    
    while (i<index)
    {
       cin>>array[i];
       i++;
    }
   
    i=1;

    while (i<=index)
    {
        cout<<array[index-i]<<" ";
        i++;
    }
    
    

    return 0;
}