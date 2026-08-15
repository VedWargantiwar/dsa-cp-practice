#include<iostream>
using namespace std;

// this is a practice of operators for first time.
// a simple calculator that can perform basic arithmatic operations and basic comparasion.

int main(){
    double a, b; 
    cout<<"please enter your first number: ";
    cin>>a;
    cout<<"please enter your second number: ";
    cin>>b; 
    cout<<"the addition of your number is: "<<(a+b)<<endl;
    cout<<"the subtraction of your number is: "<<(a-b)<<endl;
    cout<<"the multiplication of your number is: "<<(a*b)<<endl;
    cout<<"the division of your number is: "<<(a/b)<<endl;
    cout<<"this is your first number: "<<(a++)<<endl;
    cout<<"this is your first number increased by one: "<<a--<<endl;
    cout<<"this is your second number increased by one: "<<++b<<endl;
    cout<<"this is your second number: "<<--b<<endl<<endl;
    
    cout<<"the next statements will be 1 if true and 0 if false."<<endl;
    cout<<"number one == number two: "<<(a==b)<<endl;
    cout<<"number one != number two: "<<(a!=b)<<endl;
    cout<<"number one >= number two: "<<(a>=b)<<endl;
    cout<<"number one <= number two: "<<(a<=b)<<endl;

    return 0;
}

