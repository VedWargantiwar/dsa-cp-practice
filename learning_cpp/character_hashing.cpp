#include <iostream> 
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int hasharr[26] = {0};
    string s = "abcadce";

    for (int i = 0; i < s.size(); i++)
    {
       hasharr[s[i] - 'a']++;
    }
    cout<<"the frequency of a is: "<<hasharr['a' - 'a']<<'\n';
    cout<<"the frequency of c is: "<<hasharr['c' - 'a']<<'\n';
    cout<<"the frequency of e is: "<<hasharr['e' - 'a']<<'\n';
    return 0;
}