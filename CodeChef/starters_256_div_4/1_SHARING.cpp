#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a ,b;
    cin>>a>>b;
    if((a + b) % 2 == 0) cout<<(a - b)/2;
    else cout<< -1;
    
    return 0;
}
// kind of a better way to write
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b;
    cin>>a>>b;
    cout<<((a + b) % 2 == 0 ? (a - b)/2: -1)<<'\n';
    return 0;
}