#include<iostream>
using namespace std;

int main() {

    // this is my first attempt at making something with a loop, and its a basic table maker which makes a table from the number user inputs.
    int num, rows;
    int i=1;
    cout<<"please enter the number you want the table of: ";
    cin>>num;
    cout<<"please enter how many rows long the table should be of: ";
    cin>>rows;
    if (rows <= 0)
    {
        cout<<"please enter a valid number of rows.";
    }
    else {

        cout<<"the table is: "<<endl;
        
        while (i <= rows )
        {
           cout<<num<<" X "<<i<<" = "<<(num*i)<<endl;
           i++;
        }
    }
    return 0;
}