 #include <bits/stdc++.h>
 using namespace std;
 
 using ll = long long;
 using vi = vector<int>;
 using vll = vector<ll>;
 
 #define all(x) (x).begin(), (x).end()
 
 void solve() {
   int n;
   cin>>n;
   vi v(n + 2,0);
   for(int i = 0;i < n;i++){
      int d;
      cin>>d;
      ll l = 1LL * d*(i + 1);
      if(l <= n) v[l]++;
      if(l + i + 1 <= n) v[l + i + 1]--;
   }
   int s = 0;
   int c = 0;
   for(int i = 0; i < n;i++){
      s += v[i];
      if(s < 1) c++;
   }
   cout<<c<<'\n';
   s = 0;
   for(int i = 0; i < n;i++){
      s += v[i];
      if(s <= 0) cout<<i<<' ';
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