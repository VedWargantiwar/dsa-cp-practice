#include<iostream>
#include<iomanip>
using namespace std;

int main() {

    double a, b;
    int c;

    // i am making a two number calculator using the "switch" control structures
    
    cout<<"please enter the two numbers: "<<endl;
    cout<<"a = ";
    cin>>a;
    cout<<"b = ";
    cin>>b;
    cout<<"please choose the aritmatic operation, by inputting the serial number"<<endl;
    cout<<"1) addition"<<endl;
    cout<<"2) substraction"<<endl;
    cout<<"3) division"<<endl;
    cout<<"4) multiplication"<<endl;
    cout<<"5) floor division"<<endl;
    // cout<<"6) modulo"<<endl;

    cin>>c;


    switch (c)
    {
    case 1:
       cout<<"the answer is: "<<(a+b);
        break;
    
    case 2:
       cout<<"the answer is: "<<(a-b);
        break;
    case 3:
       
    if(b==0){
        cout<<"the divisor cannot be zero.";
    }
    else{
        cout<<"the answer is: "<<(a/b);
    }
        break;
    case 4:
       cout<<"the answer is: "<<(a*b);
        break;
    case 5:
       cout<<"the answer is: "<<int(a/b); // this isnt a floor divison as it falls apart with negative numbers, buts its the best i can do right now.
    
        break;
    // case 6:
    //    cout<<"the answer is: "<<int(a%b);
    //     break;
    
    default:
    cout<<"please enter a valid serial number.";
        break;
    }


    return 0;
}