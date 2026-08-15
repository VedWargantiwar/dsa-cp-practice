#include<iostream>
#include<iomanip>

using namespace std;

int main() {

    double a;

    // this is a test of else and if, i am creating a program that will tell your economic class based on the yearly income you enter.
    
    cout<<"please enter your yearly income in ruppes, and the result will be your economic class."<<endl;
    cout<<"enter: ";
    cin>>a;

    if(a>=10000000){
        cout<<"you are ultra-rich.";
    }
    else if((a>=5000000) && (a<10000000)){
        cout<<"you are rich.";
    }
    else if((a>=1500000) && (a<5000000)){
        cout<<"you are upper middle-class.";
    }
    else if((a>=600000) && (a<1500000)){
        cout<<"you are middle-class.";
    }
    else if((a>=300000) && (a<600000)){
        cout<<"you are lower middle-class.";
    }
    else if((a>=150000) && (a<300000)){
        cout<<"you are lower class.";
    }
    else if((a<150000)){
        cout<<"you are below poverty line.";
    }


    // there was no need for the "and" logic operator but i still used it to get some practice. 


    return 0;
}