#include<iostream>
#include <iomanip>


using namespace std;

// this is using BOOLALPHA, which allows users to enter straight up true or false in input instead of using 1 or 0
// this also allows the program to output true or false too instead of using 1 or 0.
// this is also using iomanip header file, using the setw function in it, it fixes the width of the output. 

int main(){

    bool a,b,AND,OR,NAND,NOR,ACOMPLIMENT,BCOMPLIEMENT; 
    
    cout<<"this is a logical gate output calculator, you intput the true or false value of input and this will give value of all logical gates."<<endl;

    cout<<"enter true/false for a: ";
    cin>>boolalpha>>a;
    cout<<"enter true/false for b: ";
    cin>>boolalpha>>b;

    AND=(a&&b);
    OR=(a||b);
    NAND=(!AND);
    NOR=(!OR);
    ACOMPLIMENT=(!a);
    BCOMPLIEMENT=(!b);

    // i defined these above varibles when i was gonna use another method, these are now useless but i still will keep them.

    cout<<boolalpha;
    cout<<" _________________________________________________________________________________"<<endl;
    cout<<"|  a  |  b  | a AND b | a OR b | a NAND b | a NOR b | a COMPLIMENT | b COMPLIMENT | "<<endl;
    cout<<"|"<<setw(5)<<a;
    cout<<"|"<<setw(5)<<b;
    cout<<"|"<<setw(9)<<AND;
    cout<<"|"<<setw(8)<<OR;
    cout<<"|"<<setw(10)<<NAND;
    cout<<"|"<<setw(9)<<NOR;
    cout<<"|"<<setw(14)<< ACOMPLIMENT;
    cout<<"|"<<setw(14)<< BCOMPLIEMENT<<"|"<<endl;
    cout<<"-----------------------------------------------------------------------------------"<<endl;

    return 0;

}