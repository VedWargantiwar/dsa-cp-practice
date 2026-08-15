#include<iostream>
using namespace std;

int main(){

    // this is a very basic pin checker, the pin will be hard coded from the starting.

    const int pin= 12345;
    int a;

    cout<<"please enter the 5 digit pin to access the next program."<<endl;
    cout<<"PIN: ";
    cin>>a;

    if(a==pin){
        cout<<"you can use the program.";
    }
    else{
        cout<<"you cannot use the program";
    }


    return 0;

}