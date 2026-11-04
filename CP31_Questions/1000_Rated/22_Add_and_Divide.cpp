 #include <bits/stdc++.h>
 using namespace std;
 
 using ll = long long;
 using vi = vector<int>;
 using vll = vector<ll>;
 
 #define all(x) (x).begin(), (x).end()
 
 void solve() {
    int a,b;
    cin>>a>>b;
    int back = INT_MAX;
    int i = 0;
    while(1){
        int counter = i;
        int temp = a;
        if(b == 1){
            counter++;
            i++;
            b++;
        }
        while(temp > 0){
            temp /= b;
            counter++;
        }
        if(counter <= back) back = counter;
        else break;
        b++;
        i++;
    }
    cout<<back<<'\n';
 }
 
 int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        solve();
    }
 
    return 0;
 }