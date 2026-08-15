#include <iostream>
using namespace std;

typedef struct student
{
    int id;
    int score;

} ep;

void addbonus(ep &a, int bonus)
{
    a.score += bonus;
}

int main()
{
    ep varad;
    varad.id = 1;
    varad.score = 100;

    cout<<"the score of id no. "<<varad.id<<" is : "<<varad.score<<'\n';
    addbonus(varad,50);
    cout<<"the score of id no. "<<varad.id<<" is : "<<varad.score<<'\n';


    return 0;
}