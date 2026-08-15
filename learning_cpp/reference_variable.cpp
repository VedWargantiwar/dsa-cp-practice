#include<iostream>
using namespace std;

// this is a test of refernce variable using basic variable.

int main(){

    double a;
    double & b = a;
    double & c = a;

    c = 20;
    b=b+5;
    b=a+b+c;
    cout<<a;

    // this is a practice test of typecasting.

    long double x,y,z;
    cout<<endl<<"please input two decimal values:  "<<endl;
    cin>>x>>z;
    cout<<"the decimal value of the sum of the two decimals is: "<<(x+z)<<endl;
    cout<<"the decimal value of the sum of the two decimals is: "<<float(x+z)<<endl;
    cout<<"the integer value of the sum of the two decimals is: "<<int(x+z)<<endl;

    
    return 0;
}