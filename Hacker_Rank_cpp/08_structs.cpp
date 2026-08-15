#include <iostream> 
#include <string>
using namespace std;


typedef struct student
{
    int age;
    string first_name;
    string last_name;
    int grade;
    
}ep;

int main()
{
    ep student1;
    cin>>student1.age;
    cin>>student1.first_name;
    cin>>student1.last_name;
    cin>>student1.grade;

    cout<<student1.age<<" ";
    cout<<student1.first_name<<" ";
    cout<<student1.last_name<<" ";
    cout<<student1.grade<<" ";
    
    return 0;
}