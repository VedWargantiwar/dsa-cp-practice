#include<iostream>
using namespace std;

int main(){
    // this is a basic attempt at a cleaner calculator, only using conditional structures.
    double num1, num2;
    char oper;

    cout<<"please enter the expression."<<endl;
    cin>>num1;
    cin>>oper;
    cin>>num2;

    switch (oper)
    {
    case '+':
       cout<<"the answer is: "<<(num1+num2);
        break;
    
    case '-':
       cout<<"the answer is: "<<(num1-num2);
        break;
    case '/':
       
    if(num2==0){
        cout<<"the divisor cannot be zero.";
    }
    else{
        cout<<"the answer is: "<<(num1/num2);
    }
        break;
    case 'x':
       cout<<"the answer is: "<<(num1*num2);
        break;
    case '|':
       cout<<"the answer is: "<<int(num1/num2); // this isnt a floor divison as it falls apart with negative numbers, buts its the best i can do right now.
    
        break;
    // case 6:
    //    cout<<"the answer is: "<<int(a%b);
    //     break;
    
    default:
    cout<<"please enter a valid operation.";
        break;
    }



}