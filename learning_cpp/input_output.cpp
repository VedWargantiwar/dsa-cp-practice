#include<iostream>
using namespace std;

// this is testing input and output stream

int main() {
    double number1, number2;
    cout<< "this program will multiply your numbers. \nplease enter your first number: "; 
    /* << is called insertion operator is used with output cause it inserts data from program to screen*/
    cin>> number1; /* >> this is called extraction opertaor cause it is extracting data and putting it in variable*/
    cout<< "please enter your second number: ";
    cin>>number2;
    cout<< "the product is: "<< number1*number2 << "\nthankyou for using.";
return 0;

}