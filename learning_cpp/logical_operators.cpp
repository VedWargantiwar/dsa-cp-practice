#include<iostream>
using namespace std;

int main(){
    bool a, b; 
    cout<<"this will work like logic gates, enter 1 for true and 0 for false."<<endl;
    cout<<"enter the first one: ";
    cin>>a;
    cout<<"enter the second one: ";
    cin>>b;

    cout<<"this is the and operation: "<<(a && b)<<endl;
    cout<<"this is the or operation: "<<(a||b)<<endl;
    cout<<"this is the nand operation: "<<(!( a && b))<<endl;
    cout<<"this is the nor operation: "<<(!(a||b))<<endl;

    return 0;

}