#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    // constants are read only variables whose values you cannot change once set.
    // if you accidently change, then the compiler gives an error.
    const float pi = 3.14;
    // pi = pi + 4;      this will give an error as its trying to change a constant value.

    // manipulators: endl which i use often and setw() which i have used once.
    
    int a = 4;
    int b = 44;
    int c = 444;
    int d = 4444;
    cout<<"this is a test of setw: "<<setw(3)<<a<<endl;
    cout<<"this is a test of setw: "<<setw(3)<<b<<endl;
    cout<<"this is a test of setw: "<<setw(3)<<c<<endl;
    cout<<"this is a test of setw: "<<setw(3)<<d<<endl;
    
    // this is a test of operator precedence.
    float j = (4*5)+3+2+4/4;
    cout<<j;
    
    return 0; 
}