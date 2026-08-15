#include <iostream> 
using namespace std;

typedef struct student
{
    int marks;
    float cgpa;
    char grade;

}ep;

union test
{
   int a;
   char b;
   float c;
};

int main()
{
    // this is my first practice at structs , unions and enums.
    // i will be making very basic program for it.

    ep ved;
    ved.cgpa=9.8;
    ved.grade='S';
    ved.marks=98;

    ep sarthak;
    sarthak.cgpa=9.3;
    sarthak.grade='A';
    sarthak.marks=93;

    cout<<"the cgpa of ved is: "<<ved.cgpa<<'\n';
    cout<<"the grade of ved is: "<<ved.grade<<'\n';
    cout<<"the marks of ved is: "<<ved.marks<<'\n';
    cout<<"the cgpa of sarthak is: "<<sarthak.cgpa<<'\n';
    cout<<"the grade of sarthak is: "<<sarthak.grade<<'\n';
    cout<<"the marks of sarthak is: "<<sarthak.marks<<'\n'<<'\n';


    // a example of enum.
    enum f1teams {ferrari,redbull,williams,alphatauri,mercedes,sauber,audi};
    cout<<"the value of ferrari is: "<<ferrari<<'\n';
    cout<<"the value of redbull is: "<<redbull<<'\n';
    cout<<"the value of williams is: "<<williams<<'\n';
    cout<<"the value of alphatauri is: "<<alphatauri<<'\n';
    cout<<"the value of mercedes is: "<<mercedes<<'\n';
    cout<<"the value of sauber is: "<<sauber<<'\n';
    cout<<"the value of audi is: "<<audi<<'\n'<<'\n'; 


    // this is a test to see how the shared memory in union is updated.
    union test testtest;
    testtest.a = 20;
    cout<<"the value of a is: "<<testtest.a<<'\n'; 
    cout<<"the value of b is: "<<testtest.b<<'\n'; 
    cout<<"the value of c is: "<<testtest.c<<'\n'<<'\n'; 
    testtest.b = 'X';
    cout<<"the value of a is: "<<testtest.a<<'\n'; 
    cout<<"the value of b is: "<<testtest.b<<'\n'; 
    cout<<"the value of c is: "<<testtest.c<<'\n'<<'\n'; 
    testtest.c = 0.123;
    cout<<"the value of a is: "<<testtest.a<<'\n'; 
    cout<<"the value of b is: "<<testtest.b<<'\n'; 
    cout<<"the value of c is: "<<testtest.c<<'\n'<<'\n'; 

    // this is too see how shared memory of union is less than struct.
    cout<<sizeof(ep)<<'\n';
    cout<<sizeof(test);
    
    
    
    return 0;
}