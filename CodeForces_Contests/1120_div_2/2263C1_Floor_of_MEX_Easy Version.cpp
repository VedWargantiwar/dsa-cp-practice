 #include <bits/stdc++.h>
 using namespace std;
 
 using ll = long long;
 using vi = vector<int>;
 using vll = vector<ll>;
 
 #define all(x) (x).begin(), (x).end()
 
 void solve() {
   int n;
   cin>>n;
   vi v(2*n + 1,0);
   for(int i = 0;i < n;i++){
      int d;
      cin>>d;
      v[d*(i + 1)] += 1;
      v[d*(i + 2)] -= 1;
   }
   int s = 0;
   int c = 0;
   for(int i = 0; i < n;i++){
      s += v[i];
      if(s < 1) c++;
   }
   cout<<c<<'\n';
   for(int i = 0; i < n;i++){
      s += v[i];
      if(s < 1) cout<<i<<' ';
   }
   cout<<'\n';
 }
 
 int main() {
   ios::sync_with_stdio(0);
   cin.tie(0), cout.tie(0);
   int T = 1; cin >> T;
   while(T--) solve();
   return 0;
 }