#include<iostream>
using namespace std;
//  this is my second attempt at a calculator after learning loops
// i copied most of the basic function from my previous attempt cause its gonna reamain the same.
int main(){
    
    double num1, num2;
    char oper;
    char yon;
 do
 {
  
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

        case '*':
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

    cout<<"\n\ndo you want to continue? press Y for yes, and N for no."<<endl;
    cin>>yon;
    cout<<endl<<endl<<endl;
    
    do
    {
       if ((yon != 'Y')&&(yon != 'y')&&(yon != 'N')&&(yon != 'n'))
        {
            cout<<"invalid choice. please enter Y or N."<<endl;
            cin>>yon;
        }
    } while ((yon != 'Y')&&(yon != 'y')&&(yon != 'N')&&(yon != 'n'));
    
    if ((yon=='N')||(yon=='n'))
    {
        cout<<"thankyou for using the calculator.";
        break;
    }
   
} while ((yon == 'Y') || (yon == 'y'));
    
return 0;    
}