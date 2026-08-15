#include<iostream>
using namespace std;

// difference between global and local variables
 int a=100; 
 bool b=false;
 float c=2.73;
 int d=1090987;

 void hi() {
    // int a;
    // bool b;
    //  do not define it again here or it will give a random value as it becomes a loacal varaiable
    cout<<a<<" "<<c;
    
 }
 
 void hello() {
    cout<<d;
 }


int main() {
    int a=15;
    bool b=true;
    float c=3.14;
    cout<< "this 'a' should give the value from local variable\n"<<a<<"\nand \nthis should give the value from local variable\n";
    cout<<b<<" "<<c<<"\nthis is calling me a function \n";
    hi();
    cout<<"\n";
    hello();
   
return 0;
}







