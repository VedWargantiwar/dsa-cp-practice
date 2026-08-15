#include <iostream>
using namespace std;
double square(double);
double cube(double);
void pon(double);


int main()
{
    // this is my first attempt at using a functions, i will make a simple square , cube and a negative or positive teller.
    
    double n;
    int square_or_cube;

    cout << "please enter a number: ";
    cin >> n;
    pon(n);
    cout<<'\n';

    cout<<"please enter whether you wanna 'square'(1) or 'cube'(2). ";
    cin>>square_or_cube;


    switch (square_or_cube)
    {
    case 1:
        cout<<"the square is: "<<square(n);
        break;
    
    case 2:
        cout<<"the cube is: "<<cube(n);
        break;
    
    default:
        cout<<"please enter a valid operation.";
    }

    return 0;
}

double square(double x)
{
    double a = x * x;
    return a;
}

double cube(double x)
{
    double a = x * x * x;
    return a;
}

void pon(double x)
{
    if (x > 0)
    {
        cout << "the number you entered is positive.";
    }
    if (x < 0)
    {
        cout << "the number you entered is negative.";
    }

    if (x == 0)
    {
        cout << "the number is zero.";
    }
}
